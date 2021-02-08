import numpy
n, q = map(int, input().split())
height = list(map(int, input().split()))
s = numpy.array(height)
sin = numpy.argsort(s)
taste = list(map(int, input().split()))
combo = []
for i in range(n):
    temp = [height[i], taste[i]]
    combo.append(temp)
combo.sort()
dp = [[0]*n]*n
print(dp)
for i in range(1, n):
    for j in range(0, i):
        print(i, j)
        dp[i][j] = -1
    print(dp[i])
# print(combo)
'''for i in range(n):
    for j in range(n):
        print(dp[i][j], end = " ")
    print("")'''
for _ in range(q):
    qt, b, c = map(int, input().split())
    b -= 1
    c -= 1

