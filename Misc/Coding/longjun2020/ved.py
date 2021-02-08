def one(a,b,c,p,q,r):
    if p-a==q-b==r-c: return True
    if (p==a and q==b) or(q==b and r==c) or (r==c and p==a): return True

    if a!=0 and p%a==0 and b*(p//a)==q and c*(p//a)==r: return True

    if p==a and r-c==q-b: return True
    if q==b and p-a==r-c: return True
    if r==c and p-a==q-b: return True

    if p==a and b!=0 and q%b==0 and c*(q//b)==r: return True
    if q==b and a!=0 and p%a==0 and c*(p//a)==r: return True
    if r==c and b!=0 and q%b==0 and a*(q//b)==p: return True

    return False

def solve(a,b,c,p,q,r):
    if a==p and b==q and c==r: return 0

    if one(a,b,c,p,q,r): return 1
    print("here")
    if a==p or b==q or c==r: return 2

    if a!=b:
        y=(p-q)//(a-b)
        print("here")
        if one(a*y,b*y,c*y,p,q,r): return 2
        print("here")
        if one(a*y,b*y,c,p,q,r): return 2
    if c!=0 and r%c==0 and r!=c:
        y=r//c
        print("here")
        if one(a*y,b*y,c*y,p,q,r): return 2
        print("here")
        if one(a,b*y,c*y,p,q,r): return 2
        print("here")
        if one(a,b,c*y,p,q,r): return 2

    x=r-c
    print("here")
    if one(a+x,b+x,c+x,p,q,r): return 2
    print("here")
    if one(a,b+x,c+x,p,q,r): return 2
    print("here")
    if one(a,b,c+x,p,q,r): return 2
    
    return 3
        
#an = open('out3.txt', 'r')
#wr = open('w.txt', 'w')
for t in range(int(input())):
    a,b,c=map(int,input().split())
    p,q,r=map(int,input().split())
    print(".")
    print(a,b,c,p,q,r)
    min1=solve(a,b,c,p,q,r)
    print(".")
    print(a,c,b,p,r,q)
    min2=solve(a,c,b,p,r,q)
    print(".")
    print(b,a,c,q,p,r)
    min3=solve(b,a,c,q,p,r)
    print(".")
    print(b,c,a,q,r,p)
    min4=solve(b,c,a,q,r,p)
    print(".")
    print(c,a,b,r,p,q)
    min5=solve(c,a,b,r,p,q)
    print(".")
    print(c,b,a,r,q,p)
    min6=solve(c,b,a,r,q,p)
    #verdict = an.readline()
    #verdict = int(verdict[:len(verdict)-1])
    #if verdict != min(min1,min2,min3,min4,min5,min6):
    #    wr.writelines(([str(a), ' ', str(b), ' ', str(c), '\n', str(p), ' ', str(q), ' ', str(r), '\nCorrect: ', str(verdict), ' ', 'Your ans: ', str(min(min1,min2,min3,min4,min5,min6)), '\n\n']))
    print(min1, end = " ")
    print(min2, end = " ")
    print(min3, end = " ")
    print(min4, end = " ")
    print(min5, end = " ")
    print(min6)
    print(min(min1,min2,min3,min4,min5,min6))





// bool one(vll l1, vll l2) {
//     //here;
//     if((l2[0] - l1[0] == l2[1] - l1[1]) && (l2[1] - l1[1] == l2[2] - l1[2]))
//         return true;
//     //here;
//     if(((l1[0] == l2[0]) && (l1[1] == l2[1])) || ((l1[1] == l2[1]) && (l1[2] == l2[2])) || ((l1[0] == l2[0]) && (l1[2] == l2[2])))
//         return true;
//     //here;
//     if(l1[0] != 0 && l2[0] % l1[0] == 0 && (l1[1]*(l2[0] / l1[0]) == l2[1]) && (l1[2]*(l2[0] / l1[0]) == l2[2]))
//         return true;
//     //here;
//     if(l1[0] == l2[0] && ((l2[2] - l1[2]) == (l2[1] - l1[1])))
//         return true;
//     //here;
//     if(l1[1] == l2[1] && ((l2[0] - l1[0]) == (l2[2] - l1[2])))
//         return true;
//     //here;
//     if(l1[2] == l2[2] && ((l2[0] - l1[0]) == (l2[1] - l1[1])))
//         return true;
//     //here;
//     if(l1[0] == l2[0] && l1[1] != 0 && l2[1] % l1[1] == 0 && (l1[2] * (l2[1] / l1[1]) == l2[2]))
//         return true;
//     //here;
//     if(l1[1] == l2[1] && l1[0] != 0 && l2[0] % l1[0] == 0 && (l1[2] * (l2[0] / l1[0]) == l2[2]))
//         return true;
//     //here;
//     if(l1[2] == l2[2] && l1[1] != 0 && l2[1] % l1[1] == 0 && (l1[0] * (l2[1] / l1[1]) == l2[0]))
//         return true;
//     return false;
// }