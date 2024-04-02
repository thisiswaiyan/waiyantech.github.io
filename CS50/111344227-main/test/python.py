from flask import Flask, render_template
import os

app = Flask(__name__)

img = os.path.join('static', 'image')

@app.route('/')
def home():
    file = os.path.join(img, 'movies.jpg')
    return render_template('image_render.html', image=file)

if __name__ == '__main__':
    app.run(debug=True)