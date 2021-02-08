class cell: 
    def __init__(self, x = 0, y = 0, dist = 0): 
        self.x = x 
        self.y = y 
        self.dist = dist 

def checkInside(currentX, currentY):
    if (x >= 1 and x <= N and y >= 1 and y <= N):  
        return True
    return False

def solution(src, dest):
    #converting src and dest to coordinates
    src += 1
    dest += 1
    #using 1 index
    sx = ceil(src / 8)
    dx = ceil(dest / 8)
    sy = src - 8*(sx - 1)
    dy = dest - 8*(dx - 1)
    #souce = [sx, sy] dest = [dx, dy]
    xMove = [2, 2, -2, -2, 1, 1, -1, -1] 
    yMove = [1, -1, 1, -1, 2, -2, 2, -2] 
    keeper = [] 
    keeper.append(cell(sx, sy, 0)) 
    visited = [[False for i in range(N + 1)]  
                      for j in range(N + 1)] 
    visited[sx][sy] = True
    while(len(keeper) > 0): 
        t = keeper[0] 
        keeper.pop(0) 
        if(t.x == dx and 
           t.y == dy): 
            return t.dist 
        for i in range(8): 
            x = t.x + xMove[i] 
            y = t.y + yMove[i] 
            if(checkInside(x, y, N) and not visited[x][y]): 
                visited[x][y] = True
                keeper.append(cell(x, y, t.dist + 1)) 