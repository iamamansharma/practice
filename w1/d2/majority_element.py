for _ in range(int(input())):
	n = int(input())
	arr = [int(i) for i in input().split(' ')]
	t = True
	for i in arr:
		if arr.count(i)>n//2:
			print(i)
			t = False
			break
	if t:
		print(-1)
