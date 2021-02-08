from collections import Counter
def solve(nums):
    cnt=Counter([len(str(n)) for n in nums])
    ans=0
    for i,n in enumerate(nums):
        ans+=n*len(nums)
        for l,freq in cnt.items():
            ans+=freq*(n*10**l)
    return ans

for _ in range(int(input())):
    n = int(input())
    nums = list(map(int, input().split()))
    print(solve(nums)%(10**9 + 7))
    print(solve(nums))