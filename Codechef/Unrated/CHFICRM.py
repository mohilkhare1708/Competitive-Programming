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
            if keeper[change] >= 1:
                keeper[change] -= 1
                continue
            elif change == 10 and keeper[5] >= 2:
                keeper[5] -= 2
                continue
            else:
                ans = 'NO'
                break
    print(ans)
