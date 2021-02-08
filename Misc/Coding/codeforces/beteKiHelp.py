n = int(input())
l = list(map(int, input().split()))
numKeep = [0]*101 # 1 <= l[i] <= 100
for i in l:
    numKeep[i] += 1
ans = -1
for i in range(1, 101):
    if numKeep[i] != 0:
        if i < 100:
            ans = max(ans, numKeep[i] + numKeep[i+1])
        else:
            ans = max(ans, numKeep[i])
print(ans)