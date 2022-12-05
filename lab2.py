
n1 = int(input("Введите число n1: "))
n2 = int(input("Введите число n2: "))
lucky_number = 0

for i in range(n1, n2 + 1):
    if len(str(i)) == 6:
        if ((i // 100000) + ((i % 100000) // 10000) + ((i % 10000) // 1000)) == (((i % 1000) // 100) + ((i % 100) // 10) + (i % 10)):
            print(i)
            lucky_number += 1
print(lucky_number)





n1 = int(input("Введите число n1: "))
n2 = int(input("Введите число n2: "))
lucky_number = 0
for i in range(n1, n2 + 1):
    if len(str(i)) == 6:
        x = [int(a) for a in str(i)]
        if sum(x[0:3]) == sum(x[3:6]):
            print(i)
            lucky_number += 1
print(lucky_number)
