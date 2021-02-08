side,Lw,Rw,value = list(map(str,input().split()))
if side=='Left':
    flag=0
else:
    flag=1
Lw=type(int)
Rw=type(int)
value=type(int)
t=0
while value!=35 and Lw!=Rw:
    if flag==0 :
        if value<35:
            Rw -=5
            value +=abs(Lw-Rw)
            t+=1
        elif value>35:
            Rw+=5
            value -=abs(Lw-Rw)
            t+=1
        elif Lw==Rw and value==35:
            break
    else:
        if value<35:
            Lw +=5
            value +=abs(Lw-Rw)
            t+=1
        elif value>35:
            Lw -=5
            value -=abs(Lw-Rw)
            t+=1
        elif Lw==Rw and value==35:
            break
print(t)