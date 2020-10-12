t = int(input())
for qq in range(t):
    l1 = list(map(int, input().split()))
    l2 = list(map(int, input().split()))
    ll1 = l1.copy()
    ll2 = l2.copy()
    ans1 = ans2 = 0
    while l1 != l2:
        #print(str(l2[0] // l1[0]), str(l2[1] // l1[1]), str(l2[2] // l1[2]))
        if l2[0] // l1[0] == 1 and l2[1] // l1[1] == 1 and l2[2] // l1[2] == 1 and (l2[0] != l1[0] or l2[1] != l1[1] or l2[2] != l1[2]):
            check = []
            diff0 = l2[0] - l1[0]
            diff1 = l2[1] - l1[1]
            diff2 = l2[2] - l1[2]
            if diff0 != 0: 
                check.append(diff0)
            if diff1 != 0:
                check.append(diff1)
            if diff2 != 0:
                check.append(diff2)
            mini = min(check)
            if diff0 != 0: 
                l1[0] += mini
            if diff1 != 0:
                l1[1] += mini       
            if diff2 != 0:
                l1[2] += mini
            ans1 += 1
        else:
            #print("here")
            while l2[0] // l1[0] != 1 or l2[1] // l1[1] != 1 or l2[2] // l1[2] != 1:
                check = []
                #print("here")
                r0 = l2[0] // l1[0]
                r1 = l2[1] // l1[1]
                r2 = l2[2] // l1[2]
                if r0 != 1:
                    check.append(r0)
                if r1 != 1:
                    check.append(r1)
                if r2 != 1:
                    check.append(r2)
                mini = min(check)
                if r0 != 1:
                    l1[0] *= mini
                if r1 != 1:
                    l1[1] *= mini
                if r2 != 1:
                    l1[2] *= mini
                #print(l1)
                ans1 += 1
    #print(ans1)
    #print(ll1)
    #print(ll2)
    while ll1 != ll2:
        #print("ghusa")
        if ll2[0] != ll1[0] or ll2[1] != ll1[1] or ll2[2] or ll1[2]:
            #print("ghusa")
            check = []
            diff0 = ll2[0] - ll1[0]
            diff1 = ll2[1] - ll1[1]
            diff2 = ll2[2] - ll1[2]
            if diff0 != 0: 
                check.append(diff0)
            if diff1 != 0:
                check.append(diff1)
            if diff2 != 0:
                check.append(diff2)
            mini = min(check)
            #print(mini)
            if diff0 != 0: 
                ll1[0] += mini
            if diff1 != 0:
                ll1[1] += mini
            if diff2 != 0:
                ll1[2] += mini
            ans2 += 1
    ans = min(ans1, ans2)
    print(ans)
    