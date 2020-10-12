from math import ceil, sqrt
for t in range(int(input())):
    a, b = map(int, input().split())
    ans = 0
    i = ceil(sqrt(a))
    while i**2 <= b:
        ans += 1
        i += 1
    print(ans)
