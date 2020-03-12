from microbit import *

raketa1 = Image("00900:"
                "05550:"
                "05550:"
                "09990:"
                "90909:")

raketa2 = Image("00900:"
                "05550:"
                "05550:"
                "09990:"
                "99999:")

raketa3 = Image("05550:"
                "05550:"
                "09990:"
                "99999:"
                "00000:")

raketa4 = Image("09990:"
                "99999:"
                "00000:"
                "00000:"
                "00000:")

raketa5 = Image("99999:"
                "00000:"
                "00000:"
                "00000:"
                "00000:")

raketa6 = Image("00000:"
                "00000:"
                "00000:"
                "00000:"
                "00000:")

raketa = [raketa1, raketa2, raketa3, raketa4, raketa5, raketa6]
display.show(raketa, delay=500)
