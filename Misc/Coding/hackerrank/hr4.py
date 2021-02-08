import math
def solve(side, dir):
    l, r, u, d = (-1, 0), (1, 0), (0, -1), (0, 1)
    if dir == "UP":
        dx, dy = l 
    elif dir == "DOWN":
        dx, dy = r 
    elif dir == "LEFT":
        dx, dy = d
    else:
        dx, dy = u
    dirRight = {u: r, r: d, d: l, l: u}
    if side % 2 == 0:
        if dir == "RIGHT":
            x = side // 2 - 1
            y = x
        if dir == "UP":
            x = side // 2 - 1
            y = x + 1
        if dir == "LEFT":
            x = side // 2 
            y = x
        if dir == "DOWN":
            x = side // 2 
            y = x -1
    else:
        x = side // 2
        y = x
    ans = [[None]*side for qq in range(side)]
    ctr = 1
    while True:
        ans[y][x] = ctr
        ddx, ddy = dirRight[dx,dy]
        xx = x + ddx 
        yy = y + ddy
        if (0 <= xx < side and 0 <= yy < side):
            if ans[yy][xx] is None:
                x = xx
                y = yy
                dx = ddx
                dy = ddy
            else:
                x = x + dx
                y = y + dy
                if not (0 <= x < side and 0 <= y < side):
                    return ans
        else:
            x = x + dx
            y = y + dy
            if not (0 <= x < side and 0 <= y < side):
                return ans
        ctr += 1
d = ["UP", "DOWN", "LEFT", "RIGHT"]
#dir = input()
#n = int(input())
l = [1,4,9,16,25,35,49]
for n in l:
    for dir in d:
        print(n, dir)
        side = int(math.sqrt(n))
        #print(side)
        ans = solve(side, dir)
    #print(ans)
        for i in ans:
            for j in range(len(i)-1):
                print(i[j], end = " ")
            print(i[len(i)-1])
        print("\n\n")