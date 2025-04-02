N, M = map(int, input().split())

basket = [0 for _ in range(N)]

for i in range(M):
    start, end, number = map(int, input().split())
    basket[start - 1:end] = [number] * (end - start + 1)

for i in basket:
    print(i, end=" ")
