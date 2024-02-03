import os

def file():
    with open('DATA.txt', "a+") as f:
        n = "Hello"
        f.write('Hello.\n')
        f.write('Dong 2.\n')

file()