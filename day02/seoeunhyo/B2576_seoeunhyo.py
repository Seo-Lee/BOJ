
sum = 0
cnt = 0

min = 0
for _ in range(7):
    number = int(input())
    if number % 2 != 0:
        cnt += 1
        sum += number
        if cnt == 1:
            min = number
            continue
        else:
            if min > number:
                min = number


if cnt == 0:
    print(-1)
else:
    print(sum)
    print(min)