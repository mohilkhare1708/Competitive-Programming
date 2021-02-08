def leftRotate(mat, c, m, n):
    mini = min(m//2, n//2)
    keep = [-1]*mini
    for i in range(mini):
        # double check
        temp = c % (2*m+2*n-4-8*i)
        for j in range(temp):
            keep[i] = mat[i][i]
            # clockwise / anti??
            for x in range(i, n-i-1):
                mat[i][x] = mat[i][x+1]
            for x in range(i, m-i-1):
                mat[x][n-i-1] = mat[x+1][n-i-1]
            for x in range(n-i-1, i, -1):
                mat[m-i-1][x] = mat[m-i-1][x-1]
            for x in range(m-1-i, i+1, -1):
                mat[x][i] = mat[x-1][i]
            mat[i+1][i] = keep[i]
    return mat

# ref gfg for right rot frm left 
dir, n, c = list(map(str, input().split()))
#print(c, n)
m, n = list(map(int, input().split()))
c = int(c)
n = int(n)
mat = []
for i in range(m):
    l = list(map(int, input().split()))
    mat.append(l)
if n < c:
    #print(c, n)
    c -= n
    #print(c)
    c %= (2*m+2*n-4)
    if dir == "Right":
        c = (2*m+2*n-4) - c
    #print(c)
    mat = leftRotate(mat, 3, m, n)
for i in mat:
    for j in range(len(i)-1):
        print(i[j], end = " ")
    print(i[len(i)-1])