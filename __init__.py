from flask import render_template, Flask, Response
from .cam_module import Camera
app = Flask(__name__)


def gen(camera):
    while True:
        frame = camera.get_frames()
        yield(b'--frame\r\n'
               b'Content-Type: image/jpeg\r\n\r\n' + frame + b'\r\n\r\n')

@app.route('/feed')
def run():
    # return gen()
    return Response(gen(Camera()), mimetype='multipart/x-mixed-replace; boundary=frame')

@app.route('/')
def index():
    return render_template('index.html')
