import random

l = list(range(1, 1000000001))
#print(l)

for i in range(1, 51):
    n = random.choice([1,2,3,4])
    p = random.choice([1,2,3,4])
    m = random.choice([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15])
    k = random.choice(l)
    print(k, end = " ")
    print(m, end = " ")
    print(n, end = " ")
    print(p)