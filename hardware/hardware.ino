#include "Stepper.h"
#include "IRremote.h"

#define STEPS 2038

// initialize the stepper library on pins 4 through 7:
Stepper myStepper(STEPS, 4, 5, 6, 7);
// Pin for IR
const int RECV_PIN = 11;
//IR instance
IRrecv irrecv(RECV_PIN);
//decode instance
decode_results results;
//hepler variables
unsigned long key_value = 0;
int angle = 100;

void setup()
{
    // set the speed at 10 rpm:
    myStepper.setSpeed(10);

    // initialize the serial port:
    Serial.begin(9600);

    //start ir
    irrecv.enableIRIn();
    irrecv.blink13(true);
}

void detectIR()
{
    //Unknown key ( mostly likely won't happen )
    if (results.value == 0XFFFFFFFF)
        results.value = key_value;

    switch (results.value)
    {
    case 0xFFE01F:
        Serial.println("\\/");
        myStepper.step(angle);
        break;
    case 0xFF906F:
        Serial.println("/\\");
        myStepper.step(-angle);
        break;
    }
    key_value = results.value;
    irrecv.resume();
}

void loop()
{
    if (irrecv.decode(&results))
    {
        detectIR();
    }
}