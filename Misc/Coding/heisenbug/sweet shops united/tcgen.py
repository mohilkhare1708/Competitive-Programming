from random import seed
from random import randint
from random import choice

print(5)
for _ in range(5):
    n = randint(90000, 250000)
    k = randint(1, 50)
    print(n, k)
    for i in range(n):
        x = randint(1, 10**4)
        y = randint(1, 10**4)
        print(x, y)