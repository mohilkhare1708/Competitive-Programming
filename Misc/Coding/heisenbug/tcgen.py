from random import seed
from random import randint
from random import choice
t = 100
n = 750
print(t)
for i in range(t):
    print(n)
    for j in range(n):
        print(choice(['nayan', 'vyom', 'udit']), choice(['+', '-']))
