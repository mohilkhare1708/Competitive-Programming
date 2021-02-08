for _ in range(int(input())):
    n = int(input())
    xCoord = {}
    yCoord = {}
    for i in range(4*n-1):
        x, y = map(int, input().split())
        if x in xCoord:
            xCoord[x] += 1
        else:
            xCoord[x] = 1
        if y in yCoord:
            yCoord[y] += 1
        else:
            yCoord[y] = 1
    ansx = 0
    ansy = 0
    for i, j in xCoord.items():
        if j % 2 == 1:
            ansx = i
            break
    for i, j in yCoord.items():
        if j % 2 == 1:
            ansy = i
            break
    print(ansx, ansy)