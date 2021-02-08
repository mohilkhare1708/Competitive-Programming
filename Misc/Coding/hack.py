str1 = input()
str2 = input()
k = int(input())
ourK = 0
incorrectIndex = -1
if str1 == str2 and (k >= 2*len(str1) or k % 2 == 0):
    print("Yes")
else: 
    for i in range(min(len(str1), len(str2))):
        if str1[i] != str2[i]:
            incorrectIndex = i
            break
# pratik
# pratiksha
# for loop till [0,5]
# incorrectIndex = 3
# ourK = 3
# k = 5
# 4 5 1 2
# _ 4 0 1
# _ _ _ 0

# i have to use all the moves
# i can perform deletion on an empty string
# k - ourK = 2 which is even 
# pratiksha --> pratik
# pranav
# pranav
# ourK = 12
# k = 30
# pranav
# pratiksha -> pranav iC = 3 // len(pratiksha) - iC + len(pranav) - iC = len(str1) + len(str2) - 2*iC


    if incorrectIndex == -1: 
        ourK = abs(len(str1) - len(str2)) #5
        if k >= ourK and (k-ourK)%2 == 0:
            print("Yes")
        elif k < ourK or k > ourK and (k - ourK) % 2 != 0:
            print("No")
        elif k >= 2*ourK:
            print("Yes")
        else:
            print("No")
    else:
        ourK = len(str1) + len(str2) - 2*incorrectIndex
        if k < ourK:
            print("No")
        elif k == ourK:
            print("Yes")
        elif k >= len(str1) + len(str2):
            print("Yes")
        elif k > ourK and (k-ourK)%2 == 0:
            print("Yes")
        else:
            print("No")