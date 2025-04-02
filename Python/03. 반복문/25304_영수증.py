total = int(input())
number = int(input())

for i in range(number):
    price, amount = map(int, input().split())
    total -= price * amount

print("Yes" if total == 0 else "No")
