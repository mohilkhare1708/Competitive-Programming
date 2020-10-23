# cook your dish here
t=int(input())
while t>0:
    n,k=map(int,input().split())
    ar=[int(i) for i in input().split()]
    c1=0
    c2=0
    for i in range (0,n):
        for j in range (i+1,n):
            if ar[i]>ar[j]:
                c1+=1 
    c1=c1*k
    for i in range (0,n):
        for j in range (0,n):
            if ar[i]>ar[j]:
                c2+=1 
    c2=c2*k*(k-1)//2 
    print(c1+c2)
    t-=1
    