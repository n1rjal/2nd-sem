import random
import time

import os

def makeBeep():
    duration = 0.5  # seconds
    freq = 1000  # Hz
    os.system('play -nq -t alsa synth {} sine {}'.format(duration, freq))

participants = [
    "Siddhant","Yubraj","Kishor",
    "Swikirt","Syrus","Utsav",
    "Sahil","Sabin","Sweta",
    "Kritigya","Nandita","Aabriti",
    "Supriya","Aabriti","Nisha",
    "Ritika",
]

SELECTED = 0
SPOTS = 4

print("Countdown starts now")
time.sleep(2)

print("Drum Rolls Please")
time.sleep(2)

for  i in range(1,6):
    print(6-i)
    time.sleep(1)
    
while True:
    choice = random.choice(participants)
    SELECTED += 1
    print(f"\nwinner no {SELECTED} is " + choice.upper())
    makeBeep()
    
    participants.remove(choice)
    if (SELECTED >= SPOTS):
        break
    for  i in range(1,6):
        print(6-i)
        time.sleep(1)
        
