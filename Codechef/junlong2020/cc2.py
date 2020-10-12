def checkifin(x,y,hull):
    n=len(hull)
    for i in range(n):
        x1,y1=hull[i][0],hull[i][1]
        x2,y2=hull[(i+1)%n][0],hull[(i+1)%n][1]
        d = (x-x1)*(y2-y1)-(y-y1)*(x2-x1)
        if (d>=0):
            return False
    return True
    
def convex_hull_graham(points):
    TURN_LEFT, TURN_RIGHT, TURN_NONE = (1, -1, 0)
    def cmp(a, b):
        return (a > b) - (a < b)
    def turn(p, q, r):
        return cmp((q[0] - p[0])*(r[1] - p[1]) - (r[0] - p[0])*(q[1] - p[1]), 0)
    def _keep_left(hull, r):
        while len(hull) > 1 and turn(hull[-2], hull[-1], r) == TURN_RIGHT:
            hull.pop()
        if not len(hull) or hull[-1] != r:
            hull.append(r)
        return hull
    points = sorted(points)
    result1 = []
    for x in points:
        result1 = _keep_left(result1,x)
    l=result1
    result2 = []
    for x in reversed(points):
        result2 = _keep_left(result2,x)
    u=result2
    
    return l.extend(u[i] for i in range(1, len(u) - 1)) or l
 
t=int(input())
for _ in range(t):
    N,Q=map(int,input().split())
    pts1=[]
    for i in range(0,N):
        x,y=map(int ,input().split())
        b=[]
        b.append(x)
        b.append(y)
        pts1.append(b)
    allhulls=[]
    while(len(pts1)>=3):
        #print(pts1)
        u=convex_hull_graham(pts1)
        for ai in u:
            if ai in pts1:
                pts1.remove(ai)
        allhulls.append(u)
    
    for i in range(Q):
        x,y = map(int,input().split())
        c=0
        for hull in allhulls:
            if (checkifin(x,y,hull)):
                c=c+1
        print(c)