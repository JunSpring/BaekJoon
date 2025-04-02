dice1, dice2, dice3 = map(int, input().split())

prize = 0
if dice1 == dice2 == dice3:
    prize = 10000 + dice1 * 1000
elif dice1 == dice2 or dice1 == dice3:
    prize = 1000 + dice1 * 100
elif dice2 == dice3:
    prize = 1000 + dice2 * 100
else:
    prize = max(dice1, dice2, dice3) * 100

print(prize)
