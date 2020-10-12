# t=int(input())
# for _ in range(t):
#     n,k,x,y=list(map(int,input().split()))
#     a=n+1
#     ans=False
#     while a!=0:
#         if (x+k)%n==y:
#             ans=True
#             break
#         else:
#             x=(x+k)%n
#         a-=1
#     if ans:
#         print('YES')
#     else:
#         print('NO')

n, x, k = 5, 2, 2
for i in range(20):
    print(x, end = " ")
    x = (x+k)%n
