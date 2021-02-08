from math import ceil
from time import time

tic = time()
MOD = 1000000007
for t in range(int(input())):
    n, k = map(int, input().split())
    l = [0] + list(map(int, input().split()))
    d = [0] + list(map(int, input().split()))

    # dp table (k+1 rows,  n+1 cols)
    dp = [[0 for i in range(n+1)] for i in range(k+1)]
    dp[0][0] = 1
    for i in range(1, k+1):
        for j in range(n+1):
            rem = min(d[i], j//l[i])  # '//' is floor division
            for f in range(rem+1):
                dp[i][j] = (dp[i][j] + dp[i-1][j-l[i]*f])
    print(dp[k][n]%MOD)
toc = time()
# Time required in seconds
print('Time Req:', toc-tic)