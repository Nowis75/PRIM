from microbit import *
compass.calibrate()
while True:
       display.show(compass.heading())
       sleep(1000)