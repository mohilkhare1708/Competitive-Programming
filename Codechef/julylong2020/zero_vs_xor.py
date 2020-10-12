n = int(input())
if n == 0:
    print(1)
else:
    binary = bin(n).replace("0b", "")
    #count zeroes
    zeroes = 0
    for i in binary:
        if i == "0":
            zeroes +=1
    print(2**zeroes)
