print(10000)
from random import seed
from random import randint
from random import choice
for _ in range(10000):
    n = randint(55, 80)
    m = randint(55, 80)
    o = randint(5, 15)
    p = randint(5, 15)
    print(n, m, o, p)
    for i in range(n):
        for j in range(m):
            print(choice(['+', '-']), end = " ")
        print("")


