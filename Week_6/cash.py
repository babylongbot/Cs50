bill = int(input("Enter bill amount: "))
cash = int(input("Enter cash recieved: "))

change = cash - bill

fihu = int(change/500)
rchange = change%500
print(f"500 rupee notes = {fihu}, = {fihu*500}")
hun = int(rchange/100)
rchange1 = rchange%100
print(f"100 rupee notes = {hun}, = {hun*100}")
ten = int(rchange1/10)
rchange2 = rchange1%10
print(f"10 rupee notes = {ten}, = {ten*10}")
five = int(rchange2/5)
rchange3 = rchange2%5
print(f"5 rupee coins = {five}, = {five*5}")
ones = int(rchange3/1)
print(f"1 rupee coins = {ones}, = {ones}")

print(f"total change: {change}")