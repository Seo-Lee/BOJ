arr = []

def changeArr(x, y):
    length = y-x
    a = 0
    if length % 2 != 0:
        a = length//2 + 1
    else:
        a = length//2

    x = x - 2
    for _ in range(a):
        x = x + 1
        y = y - 1
        tmp = arr[x]
        arr[x] = arr[y]
        arr[y] = tmp


for i in range(1, 21):
    arr.append(i)

for _ in range(10):
    N, M = map(int, input().split())
    changeArr(N,M)

for _ in arr:
    print(_,end=" ")


