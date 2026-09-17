for j in range(1, 11):
    print(f"今天是第{j}天吃饭")
    for i in range(1, 11):
        reply = int(input(f"第{j}天第{i}碗饭吃不吃,吃输入1，不吃输入0"))
        if reply == 0:
            print("吃饱了，不吃了")
            break
        print(f"正在吃第{j}天第{i}碗饭，吃完了")