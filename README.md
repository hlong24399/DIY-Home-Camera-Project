# DIY Home security camera system.

The camera is equipped with couple functions:

  * Camera can be rotated by using remote control, so that you can always find the perfect angle effortlessly.
  * The video can be live-monitored all the time everywhere on the world.
  * It is a plug-and-play system that came with really simple installation, require no GUI.

## Tools needed

1. Rasperri Pi (model 3 and 4)
2. Arduino
3. 8BYJ-48 stepper motor (with ULN2003 driver board).
4. IR receiver module and remote (any remote will work, include your TV remote)
5. Cables.
6. Cardboards ( or other material to build the camera )

![camera](demo/camera2.jpg)
## Preparation

*Prepare the hardware:*

* Set up the stepper motors and the IR receiever as in the picture.
![stepper setup](demo/camera6.jpg)
![ir setup](demo/camera5.png)
**Note that the stepper driver will be plugged into IN ORDER 4,6,5,7 (not 9,10,11,12) as in the picture.**
* Install [IRremote](https://www.arduino.cc/reference/en/libraries/irremote/)
* Execute the hardware.ino script with the [Arduino IDE](https://www.arduino.cc/en/Guide/Environment)
* Pressing the up and down button on the remote to make sure that they work properly.
**Make sure you have line of sight with the IR.**

*Prepare the software*

* Install [Arduino package](https://www.arduino.cc/en/software) and execute the hardware.ino.
**Make sure that you have `python3.7` and above installed with newest `pip`.**
* It is recommended to create [virtual environment](https://docs.python.org/3/tutorial/venv.html) before continuing.
* Install the requirements
`sudo pip install -r requirements.txt`
* Verify that flask is installed correctly by : `flask --help`
**Set up your correct [public IP address](https://opensource.com/article/18/5/how-find-ip-address-linux) on the run.sh file**
* Execute `run.sh` to create flask environment variable and deploy the server.
`source ./run.sh`


After execution, you should see flask server successfully deployed on your public IP.



**Best part, Enjoy the result!!!**

![gif](demo/camera5.gif)
![gif](demo/camera3.gif)
