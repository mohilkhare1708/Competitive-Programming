for _ in range(int(input())):
	k = int(input())
	a = list(map(int, input().split()))
	ans, d, i = 0, 0, 1
	if k <= 4:
	    print("Case #"+str(_+1)+":", 0)
	    continue
	while i < k:
		d = 0
		while i < k and (a[i] > a[i-1] or a[i] == a[i-1]):
			if a[i] == a[i-1]:
				i += 1
				continue
			d += 1
			if d >= 4:
				d = 0
				ans += 1
			i += 1
		d = 0
		while i < k and (a[i] < a[i-1] or a[i] == a[i-1]):
			if a[i] == a[i-1]:
				i += 1
				continue
			d += 1
			if d >= 4:
				d = 0
				ans += 1
			i += 1
		while i < k and a[i] == a[i-1]:
			i += 1
	print("Case #"+str(_+1)+":", ans)