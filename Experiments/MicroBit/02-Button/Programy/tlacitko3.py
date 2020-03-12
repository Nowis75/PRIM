from microbit import *

while True:
    if (button_a.is_pressed())or(button_b.is_pressed()):
        display.show(Image.HEART)
    sleep(100)
    display.clear()
