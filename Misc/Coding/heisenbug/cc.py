t=int(input())
for _ in range(t):
    l=list(map(int,input().split()))
    l.remove(l[0])
    a=min(l)
    ans=[]
    flag=True
    for i in l:
        if i%a!=0:
            flag=False
    if flag==True:
        for i in l:
            ans.append(i//a)
    else:
        ans=l
    print(ans)