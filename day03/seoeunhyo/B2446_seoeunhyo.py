n = int(input())


#0,1,2,3,4
for k in range(n,0,-1):
    print(" "*(n-k),end="")
    print("*"*((2*k)-1))

for k in range(2,n+1):
    print(" "* (n-k),end="")
    print("*"* ((2*k)-1))
