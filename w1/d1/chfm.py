for _ in range(int(input())):
    n = int(input())
    l = [int(i) for i in input().split(' ')]
    ttl = sum(l)
    mean = ttl / n
    h = True
    for i in range(n):
        if mean == l[i]:
            print(i+1)
            h = False
            break
    if h:
        print("Impossible")