import sys
import time
import Band
import looppp

def table():
    print('\n=============')
    print('1. Band')
    print('2. Loop')
    print('3. exit')
    print('=============\n')
    choice = int(input('Enter your choice: ').strip('//'))
    while (choice >= 1 and choice <= 3):
        if(choice == 1):
            Band.Band()
            table()
        elif(choice == 2):
            looppp.looppp()
            table()
        elif(choice == 3):
            print('\nEnd....\n')
            time.sleep(0.5)
            sys.exit()
    else:
        print('\nWrong choice. Pls reEnter')
        time.sleep(1)
        table()

table()