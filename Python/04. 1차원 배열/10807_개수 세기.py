n = int(input())

l = list(map(int, input().split()))

v = int(input())
count = len([i for i in l if i == v])

print(count)
