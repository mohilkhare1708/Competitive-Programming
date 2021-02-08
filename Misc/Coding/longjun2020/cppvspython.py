# summing 1 to 10^6 using for loop
import time
start = time.process_time()
ans = 0
for i in range(1, 1000001):
    ans += i
print(ans)
end = time.process_time()
print("Time taken: ", str((end - start)*10**6), "microseconds")