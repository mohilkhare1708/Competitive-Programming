t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    letters={}
    for i in range(len(s)):
        if s[i] in letters:
            letters[s[i]]+=1
        else:
            letters[s[i]]=1
    ans=True
    for i,j in letters.items():
        if j%2==1:
            ans=False
            break
    if ans:
        print('YES')
    else:
        print('NO')