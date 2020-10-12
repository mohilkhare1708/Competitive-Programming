import functools

# Refered from github gists: https://gist.github.com/arthur-e/5cf52962341310f438e96c1f3c3398b8
# Uploaded in 2016

def convex_hull_graham(points):
    #TURN_LEFT, TURN_RIGHT, TURN_NONE = (1, -1, 0)
    def cmp(a, b):
        return (a > b) - (a < b)
    def turn(p, q, r):
        return cmp((q[0] - p[0])*(r[1] - p[1]) - (r[0] - p[0])*(q[1] - p[1]), 0)
    def _keep_left(hull, r):
        while len(hull) > 1 and turn(hull[-2], hull[-1], r) == 1:
            hull.pop()
        if not len(hull) or hull[-1] != r:
            hull.append(r)
        return hull

    points = sorted(points)
    l = functools.reduce(_keep_left, points, [])
    u = functools.reduce(_keep_left, reversed(points), [])
    return l.extend(u[i] for i in range(1, len(u) - 1)) or l

t = int(input())
for qq in range(t):
    n, q = map(int, input().split())
    coords = []
    for i in range(n):
        x, y = map(int, input().split())
        pt = (x, y)
        coords.append(pt)
    for i in range(q):
