T=int(input())
for i in range(T):
    N,K=list(map(int,input().split()))
    step=0
    flag=0
    for i in range(1,K+1):
        try:
            if flag==0:
                step+=1
                if step==N:
                    flag=1   
        except:
            if flag==1:
                step-=1
                if step==1:
                    flag=0
    print(step)