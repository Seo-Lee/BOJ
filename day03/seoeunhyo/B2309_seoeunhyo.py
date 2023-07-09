

lst = [int(input()) for i in range(9)]
lst.sort()

del_index1 = 0
del_index2 = 0

for i in range(9):
    for j in range(i, 8):
        temp_lst = list(lst)

        del temp_lst[i]
        del temp_lst[j]

        if sum(temp_lst) == 100:
            del_index1 = i
            del_index2 = j

del lst[del_index1]
del lst[del_index2]
for i in lst:
    print(i)
