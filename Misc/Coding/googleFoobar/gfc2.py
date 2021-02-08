import math

class cell: 
    def __init__(self, x = 0, y = 0, dist = 0): 
        self.x = x 
        self.y = y 
        self.dist = dist 

def checkInside(currentX, currentY):
    if (currentX >= 1 and currentX <= 8 and currentY >= 1 and currentY <= 8):  
        return True
    return False
    
def returnCoordinates(pos):
    x = 0
    for i in range(1,9):
        for j in range(1,9):
            if x == pos:
                return i, j
            else:
                x += 1

def solution(src, dest):
    #converting src and dest to coordinates
    sx, sy = returnCoordinates(src)
    dx, dy = returnCoordinates(dest)
    #souce = [sx, sy] dest = [dx, dy]
    xMove = [2, 2, -2, -2, 1, 1, -1, -1] 
    yMove = [1, -1, 1, -1, 2, -2, 2, -2] 
    keeper = [] 
    keeper.append(cell(sx, sy, 0)) 
    visited = [[False for i in range(9)]  
                      for j in range(9)] 
    visited[sx][sy] = True
    while(len(keeper) > 0): 
        t = keeper[0] 
        keeper.pop(0) 
        if(t.x == dx and t.y == dy): 
            return t.dist 
        for i in range(8): 
            x = t.x + xMove[i] 
            y = t.y + yMove[i] 
            if(checkInside(x, y) and not visited[x][y]): 
                visited[x][y] = True
                keeper.append(cell(x, y, t.dist + 1)) 

#print(solution(0, 63))