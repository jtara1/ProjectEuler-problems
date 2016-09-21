#solved it using Python, here's the code:
from msvcrt import getch

a = 0
b = 1
counter = 1

# once the fibonacci number, b, becomes 1000 digits, the loop will exit
while (b / 10 ** 999 < 1):
    # a = b
    # b = (old value of) a + (old value of) b
    a, b = b, a + b
    counter += 1

print counter
#print b 

getch()
