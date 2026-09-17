if int(input("请输入你的身高：")) < 120:
    print("免费（身高）")
elif int(input("请输入你的VIP级别：")) > 3:
    print("免费（VIP）")
elif int(input("请输入今天几号：")) == 1:
    print("免费（1号）")
else:
    print("都不满足，收费10元")