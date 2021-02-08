t = 1000
n = 10
print(t)
from random import seed
from random import randint
from random import choice
for i in range(t):
    print(n)
    for i in range(n):
        print(randint(1, 500), end = " ")
    print("")