'''
mod = 998244353
for t in range(int(input())):
    n, x = map(int, input().split())
    l = list(map(int, input().split()))
    sum = [1]*n
    for i in  range(1, n):
        sum[i] = sum[i-1] + pow(x, i) #, 998244353)
    ans = 1
    for i in range(n):
        for j in range(i, n):
            summ = (l[0]*(sum[j-i])) #%998244353))%998244353
            summ = pow(summ, 2) #, 998244353)
            ans = ans * summ 
    print(ans)
'''
mod = 998244353
for t in range(int(input())):
    n, x = map(int, input().split())
    l = list(map(int, input().split()))
    sum = [1]*n
    for i in  range(1, n):
        sum[i] = (sum[i-1]%mod + pow(x, i, mod))%mod
    for i in range(n):
        sum[i] = (sum[i]%mod * l[0]%mod)%mod
        sum[i] = pow(sum[i], 2, mod)
    print(sum)
    ans = 1
    for i in range(0, n):
        ans = ((ans%mod)*pow(sum[i], n-i, mod))%mod
    print(ans)
'''
    for i in range(n):
        for j in range(i, n):
            ans = ((ans%998244353)*(sum[j-i]%998244353))%998244353
    print(ans)
'''          

    

