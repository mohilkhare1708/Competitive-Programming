t = int(input())
for qq in range(t):
    n, k= map(int, input().split())
    l = list(map(int, input().split()))
    k = k % n
    firstHalf = l[n-k:]
    secondHalf = l[:n-k]
    ans = firstHalf + secondHalf
    for i in range(len(ans)):
        print(ans[i], end = " ")
