n = int(input())
l = list(map(int, input().split()))
d, m = map(int, input().split())
# sliding window
# {} = window, window size = 2, req sum = 5
# [{1,2},3,4,5,6] window sum 3
# [1,{2,3},4,5,6] window sum 5 == req sum so ctr++
# [1,2,{3,4},5,6] window sum 7
# [1,2,3,{4,5},6] window sum 9
# [1,2,3,4,{5,6}] window sum 11
# ctr = 1 = ans
# this is the concept of this code
# loop ran from index 0 to 4 for n = 6, window size = 2 i.e. for range [0, n-windowSize)

#finding the sum of first window
windowSum = 0
ctr = 0 # to keep count of valid subarrays
for i in range(m):
    windowSum += l[i]
if windowSum == d:
    ctr += 1
windowStart = 0
windowEnd = m-1
# now we will just remove the first element at each loop and add next element to the subarray
for i in range(n-m+1): # loop needs to run for 0, n-m
    windowSum -= l[windowStart]
    windowStart += 1
    windowEnd += 1
    if windowEnd >= n:
        break
    windowSum += l[windowEnd]
    if windowSum == d:
        ctr += 1
print(ctr)

# n = int(input())
# l = list(map(int, input().split()))
# d, m = map(int, input().split())
# ctr = 0
# loopCtr = 0
# for i in range(n-m+1):
#     windowSum = 0
#     for j in range(m):
#         windowSum += l[i+j]
#         loopCtr += 1
#     if windowSum == d:
#         ctr += 1
# print(ctr, loopCtr)