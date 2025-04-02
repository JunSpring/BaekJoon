N, M = map(int, input().split())

basket = [i + 1 for i in range(N)]

for i in range(M):
    basket1, basket2 = map(int, input().split())
    basket[basket1 - 1], basket[basket2 - 1] = basket[basket2 - 1], basket[basket1 - 1]

for i in basket:
    print(i, end=" ")
