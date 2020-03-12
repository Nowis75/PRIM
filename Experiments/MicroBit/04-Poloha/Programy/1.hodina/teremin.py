from microbit import *
import music

while True:
    x = accelerometer.get_x()
    y = accelerometer.get_y()
    if (x < -700):
        ton = "C4"
    elif (x < -400):
        ton = "D4"
    elif (x < - 100):
        ton = "E4"
    elif (x < 100):
        ton = "F4"
    elif (x < 400):
        ton = "G4"
    elif (x < 700):
        ton = "A4"
    else:
        ton = "B4"
    if (y < -400):
        nota = ton
    elif (y < 0):
        nota = ton + ":2"
    elif (y < 400):
        nota = ton + ":4"
    else:
        nota = ton + ":8"
    music.play(nota)