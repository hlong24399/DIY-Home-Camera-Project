arduino-cli compile -b arduino:avr:mega /home/pi/camera-app/home-camera/hardware/hardware.ino
arduino-cli upload -b arduino:avr:mega -p /dev/ttyACM0 -i /home/pi/camera-app/home-camera/hardware/hardware.ino
