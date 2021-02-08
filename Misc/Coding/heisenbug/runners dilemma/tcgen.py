print(1000)
import random
for i in range(1000):
    n = random.randint(1, 10000)
    print(n)
    for j in range(n):
        print(random.randint(1, 10**3), end=" ")
    print("")