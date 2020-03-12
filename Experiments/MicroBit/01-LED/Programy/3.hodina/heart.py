from microbit import *

for i in range(1, 100):
    display.show(Image.HEART)
    sleep(400)
    display.show(Image.HEART_SMALL)
    sleep(400)
display.clear()
