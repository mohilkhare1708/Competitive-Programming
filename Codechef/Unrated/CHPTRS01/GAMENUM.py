def rotate(input,d): 
    Lfirst = input[0 : d] 
    Lsecond = input[d :] 
    Rfirst = input[0 : len(input)-d] 
    Rsecond = input[len(input)-d : ] 
    final = Rsecond + Rfirst 
    return final

t=int(input())
for i in range(t):
    a , b = list(map(int , input().split()))
    binA = bin(a)[2:]
    binB = bin(b)[2:]

    if len(binA) > len(binB):
        biggerLen = len(binA)
        reqLen = biggerLen - len(binB)
        binB = "0"*reqLen + binB
    else:
        biggerLen = len(binB)
        reqLen = biggerLen - len(binA)
        binA = "0"*reqLen + binA
    max = -1
    ops = 0
    for x in range(len(binB)+1):
        check = a ^ int(binB, 2)
        #print(binA + "^" + binB + "=" + bin(check).replace("0b",""))
        if check > max:
            max = check
            ops = x
        binB = rotate(binB, 1)
        #print("Max: " + str(max))
    print(str(ops) + " " + str(max))