# arduino-cli compile -b arduino:avr:mega /home/pi/camera-app/home-camera/hardware/hardware.ino
# arduino-cli upload -b arduino:avr:mega -p /dev/ttyACM0 -i /home/pi/camera-app/home-camera/hardware/hardware.ino
source /home/pi/camera-app/bin/activate
export FLASK_APP=/home/pi/camera-app/home-camera
export FLASK_ENV=development
flask run -h 67.49.38.20 -p 5000
