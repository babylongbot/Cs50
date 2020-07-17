
import re
from sys import exit

while True:
    get = input("enter card number: ")
    if len(get) > 12:
        break
    elif len(get) < 12:
        print("INVALID CARD PLEASE TRY AGAIN")
        exit(1)

check1 = int(len(get))

if check1 == 15:
    checka0 = re.match('^34',get)
    checka1 = re.match('^37',get)
    if checka1 or checka0:
        print("AMEX")
        exit(0)

if check1 == 13 or check1 == 16:
    checkv0 = re.match('^4',get)
    checkm0 = re.match('^51',get)
    checkm1 = re.match('^52',get)
    checkm2 = re.match('^53',get)
    checkm3 = re.match('^54',get)
    checkm4 = re.match('^55',get)
    if checkv0:
        print("VISA")
        exit(0)
    elif checkm0 or checkm1 or checkm2 or checkm3 or checkm4:
        print("MASTERCARD")

