t = int(input())
for qq in range(t):
    l1 = list(map(int, input().split()))
    l2 = list(map(int, input().split()))
    incorrect = []
    signMismatch = 0
    # checking move-less success
    if l1 == l2:
        print("0")
        continue
    possByAdd = True
    possByMulti = False
    for i in range(3):
        if l1[i] != l2[i]:
            if abs(l1[i]) >= abs(l2[i]):
                possByMulti = False
            incorrect.append(i)
        if (l1[i] > 0 and l2[i] < 0) or (l1[i] < 0 and l2[i] > 0):
            signMismatch += 1
    # checking possibility of success in 1 move
    onePoss = False
    if len(incorrect) == signMismatch or signMismatch == 0:
        for i in incorrect:
            if l1[i] != 0 and l2[i] % l1[i] == 0:
                checkR = l2[i] // l1[i]
                possByMulti = True
            if l1[i] == 0:
                possByMulti = False

            checkD = l2[i] - l1[i]
        if possByMulti:
            for i in incorrect:
                if l2[i] / l1[i] != checkR:
                    possByMulti = False
                    break
        for i in incorrect:
            if l2[i] - l1[i] != checkD:
                possByAdd = False
                break
        if possByAdd or possByMulti:
            onePoss = True
    else:
        possByAdd = True
        for i in incorrect:
            checkD = l2[i] - l1[i]
        for i in incorrect:
            if l2[i] - l1[i] != checkD:
                possByAdd = False
                break
        if possByAdd:
            onePoss = True
    # checking possibility of success in 2 moves
    twoPoss = False
    if len(incorrect) <= 2 and not onePoss:
        twoPoss = True
    if not twoPoss and not onePoss:
        diff = []
        p = []
        n = []
        pDiff = 0
        nDiff = 0
        for i in incorrect:
            diff.append(l2[i] - l1[i])
            if l2[i] - l1[i] > 0:
                pDiff += 1
                p.append(i)
            else:
                nDiff += 1
                n.append(i)
        # checking (+ , +) possibility, only poss when pDiff/nDiff == 3
        if pDiff == 3 or nDiff == 3:
            mini = min(diff)
            temp = l1.copy()
            for i in incorrect:
                temp[i] += mini
                if temp[i] == l2[1]:
                    incorrect.remove(i)
            if len(incorrect) == 1:
                twoPoss = True
            else:
                newDiff = []
                for i in incorrect:
                    newDiff.append(l2[i] - l1[i])
                check = newDiff[0]
                for i in newDiff:
                    if i != check:
                        twoPoss = False
        # checking (+ , *) possibility
        # if pDiff > nDiff:
        #     diffKeep = []
        #     rKeep = []
        #     for i in p:
        #         diffKeep.append(l2[i] - l1[i])
        #         rKeep.append(l2[i] / l1[i])
        #     checkD = diffKeep[0]
        #     checkR = rKeep[0]
        #     for i in diffKeep:
        #         if i != checkD:
    if onePoss:
        ans = 1
    elif twoPoss:
        ans = 2
    else:
        ans = 3
    print(ans)