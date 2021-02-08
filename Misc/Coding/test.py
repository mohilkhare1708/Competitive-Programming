from sys import stdin, stdout 
import sys 
def get_ints(): return list(map(int, sys.stdin.readline().strip().split())) 


for _ in range(int(input())):
    s = stdin.readline()
    d={}
    d[-1]=-1
    stack=[]
    save=-1
    op=False
    for i in range(len(s)-1,-1,-1):
        if s[i]=='(' and len(stack)==0:
            save=-1
        if s[i]==')':
            stack.append(i)
        elif s[i]=='(' and len(stack)!=0:
            op=True
            save=i+1
            d[i+1]=stack.pop()+1

        if save!=-1 and s[i]==')' and op==True:
            d[i+1]=d[save]
        
          
            
    Q=int(input())
    a=get_ints() 
    for i in a:
        if i in d.keys():
            print(d[i])
        else:
            print(-1)