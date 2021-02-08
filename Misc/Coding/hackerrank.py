s = input()
lowerCase = []
upperCase = []
even = []
odd = []
for i in s:
    if i.isalpha() and i.isupper():
        upperCase.append(i)
    elif i.isalpha() and i.islower():
        lowerCase.append(i)
    elif int(i) % 2 == 0:
        even.append(i)
    else:
        odd.append(i)
upperCase.sort()
lowerCase.sort()
even.sort()
odd.sort()
for i in lowerCase:
    print(i, end = "")
for i in upperCase:
    print(i, end = "")
for i in odd:
    print(i, end = "")
for i in even:
    print(i, end = "")
