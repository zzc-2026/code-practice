t1 = (1, 2, 3)
# t1[0] = 5
# t1.append(4)
t1 = (1, 2, 3, [4, 5, 6])
t1[3][0] = 5
print(t1)
t1[3].append(5)
print(t1)
# t1[3] = [5, 6, 7]
for i in t1:
    print(i)