n = int(input())
l = list(map(str, input().split()))
print(all([int(i) >= 0 for i in l]) and any([i[:] == i[::-1] for i in l]))
#false and true = false
#true and [false, false, true] = true and true
