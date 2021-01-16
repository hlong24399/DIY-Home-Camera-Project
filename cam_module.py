import cv2

CAMERA_ID= 0

class Camera():
    def __init__(self):
        self.vid = cv2.VideoCapture(CAMERA_ID)

    def __delete__(self):
        self.vid.release()

    def get_frames(self):
        ret, f = self.vid.read()
        frame = cv2.flip(f,1)
        ret, jpeg = cv2.imencode('.jpg', frame)
        return jpeg.tobytes()
