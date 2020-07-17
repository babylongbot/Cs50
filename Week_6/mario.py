
while True:
    h = int(input("Enter height: "))
    if h > 0:
        break
h = h+1
i = 1
j = 0
for i in range(i,h,1):
    s = h - i
    for j in range(0,s,1):
        print(" ", end="")
    for j in range(0,i,1):
        print("#", end="")
    print()