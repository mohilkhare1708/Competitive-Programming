s = [int(x) for x in range(10**9)]
l = [int(x) for x in range(1,100000)]
print(1000)
import random
for i in range(1000):
    n = random.choice(l)
    print(n)
    for j in range(n):
        print(random.choice(s), end=" ")
    print("")