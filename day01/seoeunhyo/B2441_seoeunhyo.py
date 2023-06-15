tc = int(input())

for star in range(tc,0,-1):
    for gap in range(tc-star):
        print(" ",end="")

    for j in range(star):
        print("*",end='')
    print()

#hello