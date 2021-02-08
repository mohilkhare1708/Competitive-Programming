#f1 = open(r'C:\Users\User\Desktop\Imp\i6.txt', 'r')
#f2 = open(r'C:\Users\User\Desktop\Imp\o6.txt', 'w')
#c = f1.readlines()
#i = 0
#for _ in range(int(c[0].strip('\n'))):
for _ in range(int(input())):
	#i += 1
	n = int(input())
	#n = int(c[i].strip('\n'))
	#i += 1
	l, m = map(int, input().split())
	#l, m = map(int, c[i].strip('\n').split())
	ans = 0
	for j in range(n):
		l = (l%m)*10
		ans += l//m
	print(ans)
	#f2.writelines(str(ans)+'\n')
#f1.close()
#f2.close()