n=int(input())
for _ in range(n):
    s,v,Kp,Kd=list(map(float,input().split()))
    t=0
    errors=[]
    while v!=s:
        if errors!=[]:
            error= s-v
            Gain= Kp*error + Kd*(errors[len(errors)-1]- error)
            v += Gain
            if v==s and error==0:
                break
            errors.append(error)
            t+=1
        elif errors==[]:
            error= s-v
            Gain= Kp*error - Kd*error
            v += Gain
            errors.append(error)
            t+=1
            if v==s and error==0:
                break
        #print(v)
    print(t)