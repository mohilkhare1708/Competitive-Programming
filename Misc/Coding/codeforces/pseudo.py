# res = 0
# s = input()
# inf = 9999999999999999999
# for i in range(inf):
#     cur = curr = i
#     ok = True
#     for j in range(len(s)):
#         res += 1
#         if s[j] == '+':
#             cur += 1
#         else:
#             cur -= 1
#         print(curr, cur)
#         if cur < 0:
#             ok = False
#             break
#     if ok:
#         break

# print(res)

for qq in range(int(input())):
    s = input()
    sum = 0
    keep = []
    ok = True
    for i in s:
        if i == '+':
            sum += 1
        else:
            sum -= 1
        if sum < 0:
            ok = False
        keep.append(sum)
    if ok:
        print(0)
    else:
        for i in range(1, 10000000):
            sum = 0
            for i in keep:
                if
    
    
