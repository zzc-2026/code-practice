if int(input("请输入你的身高：")) > 120:
    if int(input("请输入VIP级别：")) > 3:
        print("欢迎你免费游览")
    else:
        print("收费10元")
else:
    print("欢迎你免费游览")