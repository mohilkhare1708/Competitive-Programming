n,m,k=list(map(int,input().split()))
a=list(input())
b=list(input())
x=sorted(a)
y=sorted(b)
u=0
v=0
op=0
while u<n and v<m:
    if x[u]+k < y[v]:
        u+=1
    elif x[u]-k > y[v]:
        v+=1
    else:
        op+=1
        u += 1
        v += 1
print(op)