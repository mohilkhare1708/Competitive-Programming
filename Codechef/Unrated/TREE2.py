for t in range(int(input())):
    n = int(input())
    nums = list(map(int, input().split()))
    nums = set(nums)
    nums.discard(0)
    print(len(nums))