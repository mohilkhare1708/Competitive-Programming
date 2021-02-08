def solve(s):
    ans = 0
    for c in s:
        ans = ans * 26 + (ord(c)-ord('A')+1)
    return ans

for _ in range(int(input())):
    print(solve(input()) % (10**9 + 7))