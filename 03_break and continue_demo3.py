i = 1
while i <= 10:
    reply = int(input(f"第{i}碗饭吃不吃,吃输入1，不吃输入0"))
    if reply == 0:
        print("吃饱了，不吃了")
        break
    print(f"正在吃第{i}碗饭，吃完了")
    i += 1