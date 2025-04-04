N, M = map(int, input().split())

l = [i for i in range(1, N + 1)]

for i in range(M):
    start, end = map(int, input().split())
    l[start-1:end] = reversed(l[start-1:end])

for i in l:
    print(i, end=" ")
