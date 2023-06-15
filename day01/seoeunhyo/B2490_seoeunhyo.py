def switch(key):
    result = {0:'E',1:'A',2:'B',3:'C',4:'D'}.get(key, 'unknown')
    print(result)


arr = []
for _ in range(3):
    bae = 0
    for i in input():
        if i == '0':
            bae += 1
    switch(bae)



