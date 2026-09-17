import random
random_num = random.randint(1, 10)
num = int(input("第一次输入猜测数字："))
if num == random_num:
    print("你真棒，一次就猜对了")
else:
    if num > random_num:
        print("你猜的数字大了")
    else:
        print("你猜的数字小了")
    num = int(input("第二次输入猜测数字："))
    if num == random_num:
        print("你真棒，两次就猜对了")
    else:
        if num > random_num:
            print("你猜的数字大了")
        else:
            print("你猜的数字小了")
        num = int(input("第三次输入猜测数字："))
        if num == random_num:
            print("你真棒，最终猜对了")
        else:
            print("很遗憾机会用完了，你没能猜对")
            print(f"正确答案是：{random_num}")