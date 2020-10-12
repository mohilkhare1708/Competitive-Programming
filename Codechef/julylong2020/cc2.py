# Done!!!
for t in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = a + b
    mini = min(c)
    freq = {}
    aKeep = {}
    for i in range(2*n):
        if c[i] in freq:
            freq[c[i]] += 1
        else:
            freq[c[i]] = 1
    ok = True
    for i, j in freq.items():
        if j & 1:
            print(-1)
            ok = False
            break
        else:
            aKeep[i] = j//2
    if not ok:
        continue
    bKeep = aKeep.copy()
    extraa = []
    extrab = []
    aCheck = {}
    bCheck = {}
    for i in a:
        if i in aCheck:
            aCheck[i] += 1
        else:
            aCheck[i] = 1
        if aCheck[i] > aKeep[i]:
            extraa.append(i)
    for i in b:
        if i in bCheck:
            bCheck[i] += 1
        else:
            bCheck[i] = 1
        if bCheck[i] > bKeep[i]:
            extrab.append(i)
    ans = 0
    extraa.sort()
    extrab.sort()
    for i in range(len(extraa)):
        ans += min(mini*2, extraa[i], extrab[-i-1])
    print(ans)