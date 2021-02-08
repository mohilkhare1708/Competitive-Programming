import difflib

for _ in range(int(input())):
    l = []
    n, q = map(int, input().split())
    for i in range(n):
        l.append(input())
    for i in range(q):
        print(difflib.get_close_matches(input(), l)[0])