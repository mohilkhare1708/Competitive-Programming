from collections import defaultdict

d, i, s, v, f = map(int, input().split())
graph = defaultdict(lambda: {'in': set(), 'out': set()})
weights, car_keeper = defaultdict(int), defaultdict(int)


for _ in range(s):
    b, e, st, l = map(str, input().split())
    b = int(b)
    e = int(e)
    l = int(l)
    graph[b]['out'].add(st)
    graph[e]['in'].add(st)
    weights[st] = l

for _ in range(v):
    p, *route = input().split()
    duration = 0
    for road in route:
        duration += weights[road]
    if duration <= d: #checking if the car will reach before/on time
        for road in route:
            car_keeper[road] += 1

print("graph", graph, "\n")
print("weights", weights, "\n")
print("car_keeper", car_keeper, "\n")

ans = []

for node in graph:
    if graph[node]['in']:
        temp = {'id' : node}
        ctr, road, mini = 0, [], 10**9
        for x in graph[node]['in']:
            if car_keeper[x]:
                ctr += 1
                mini = min(mini, car_keeper[x])
                road.append((x, car_keeper[x]))
        temp['count'] = ctr
        temp['roads'] = list(map(lambda y : (y[0], y[1]//mini), road))
        if len(road):
            ans.append(temp)

print(len(ans))

for i in ans:
    print(i['id'])
    print(i['count'])
    for road, dur in i['roads'] : print(road, dur)


