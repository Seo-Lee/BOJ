N = 9

max = int(input())
index = 1
maxIndex = 1

for _ in range(N-1):
    index += 1
    number = int(input())
    if max < number:
        max = number
        maxIndex = index

print(max)
print(maxIndex)
