age = int(input("请输入你的年龄："))
year = int(input("请输入你的入职时间："))
level = int(input("请输入你的级别："))
if age >= 18:
    if age < 30:
        if year >2:
            print("入职时间满2年，可以领取礼物")
        elif level > 3:
            print("级别大于3，可以领取礼物")
        else:
            print("入职时间和级别都不满足，不可以领取礼物")
    else:
        print("虽然成年但年龄超标，不可以领取礼物")
else:
    print("未成年人不可以领取礼物")