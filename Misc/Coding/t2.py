MOD=10**9+7

def qpow(x,n): 
    if n == 0:
        return 1
    if n == 1:
        return x
    v = pow(x, n // 2)
    return v * v % MOD * (x if n%2==1 else 1) % MOD

def mulmod(a, b, mod): 
  
    res = 0; # Initialize result 
    a = a % mod; 
    while (b > 0): 
      
        # If b is odd, add 'a' to result 
        if (b % 2 == 1): 
            res = (res + a) % mod; 
  
        # Multiply 'a' with 2 
        a = (a * 2) % mod; 
  
        # Divide b by 2 
        b //= 2; 
  
    # Return result 
    return res % mod; 

t=int(input())
for x in range(t):
    N,M=map(int,input().split())
    n1=min(N,M)
    m=max(N,M)
    n2=qpow(n1,2)
    n3=qpow(n1,3)
    n4=qpow(n1,4)
    n5=qpow(n1,5)
    n6=qpow(n1,6)
    ans=((-4*n6%MOD
        +6*n5%MOD*m%MOD-18*n5%MOD
        +30*n4%MOD*m%MOD-25*n4%MOD
        +60*n3%MOD*m%MOD
        +60*n2%MOD*m%MOD+29*n2%MOD
        +24*n1%MOD*m%MOD+18*n1%MOD)%MOD*205555557%MOD)%MOD
    
    print(str(mulmod(-4, n6, MOD))+" "
        +str(6*n5%MOD*m%MOD)+" "+str(18*n5%MOD)
        +" "+str(30*n4%MOD*m%MOD)+" "+str(25*n4%MOD)
        +" "+str(60*n3%MOD*m%MOD)
        +" "+str(60*n2%MOD*m%MOD)+" "+str(29*n2%MOD)
        +" "+str(24*n1%MOD*m%MOD)+" "+str(18*n1%MOD))
    
    """print((-4*n6%MOD+6*n5%MOD*m%MOD-18*n5%MOD
        +30*n4%MOD*m%MOD-25*n4%MOD
        +60*n3%MOD*m%MOD
        +60*n2%MOD*m%MOD+29*n2%MOD
        +24*n1%MOD*m%MOD+18*n1%MOD))"""
    
    print(ans%MOD)