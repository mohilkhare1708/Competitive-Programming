from bisect import insort, bisect_right

def solve(a, n):
    buses = [a[n-1]]
    for i in range(n-2, -1, -1):
        idx = bisect_right(buses, a[i])
        if idx == len(buses):
            buses.append(a[i])
        else:
            buses[idx] = a[i]
    return len(buses)

for _ in range(int(input())):
    n = int(input())
    print(solve(list(map(int, input().split())), n))