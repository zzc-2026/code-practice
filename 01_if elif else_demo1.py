height = int(input("请输入你的身高："))
vip_level = int(input("请输入你的VIP级别："))
date = int(input("请输入今天几号："))
if height < 120:
    print("免费（身高）")
elif vip_level > 3:
    print("免费（VIP）")
elif date == 1:
    print("免费（1号）")
else:
    print("都不满足，收费10元")