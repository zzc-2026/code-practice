num = int(input("请输入一个数字："))
count = 0
for n in range(1, num + 1):
    if n % 2 == 0:
        count += 1
print("1到%d之间有%d个偶数" % (num, count))