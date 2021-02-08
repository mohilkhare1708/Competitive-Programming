def solve(graph):
    grps = []
    n = len(graph)
    vis = [False for i in range(n)]
    for i in range(n):
        if not vis[i]:
            ct = 0
            vis[i] = True
            wait = [i]
            while(wait):
                currNode = wait.pop()
                ct += 1
                for node in graph[currNode]:
                    if not vis[node]:
                        vis[node] = True
                        wait.append(node)
            grps.append(ct)
    return sorted(grps)

#tic = time()
for t in range(int(input())):
    n = int(input())
    graph = dict(zip(range(n), [[] for i in range(n)]))
    #print(graph)
    for i in range(int(input())):
        src, dest = map(int, input().split())
        graph[src].append(dest)
        graph[dest].append(src)
    
    groups = solve(graph)
    print(len(groups))
    print(*groups)