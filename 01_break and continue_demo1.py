for i in range(1, 11):
    flag = int(input(f"第{i}碗饭你吃不吃？吃则输入1，不吃则输入0"))
    if flag == 0:
        continue
    print(f"正在吃第{i}碗饭，吃完了")