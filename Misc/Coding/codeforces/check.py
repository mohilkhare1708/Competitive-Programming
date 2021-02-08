t = int(input())
for _ in range(t):
    keeper = {5 : 0, 10 : 0, 15 : 0} # you'll never need 15 change
    n = int(input())
    transactions = list(map(int, input().split()))
    ans = 'YES'
    for i in transactions:
        keeper[i] += 1
        if i != 5:
            change = i - 5
            if (change == 5 and keeper[5] >= 1) or (change == 10 and keeper[5] >= 2):
                keeper[5] -= (change/5)
                continue
            elif change == 10 and keeper[10] >= 1:
                keeper[10] -= 1
                continue
            else:
                ans = 'NO'
                break
    print(ans)
