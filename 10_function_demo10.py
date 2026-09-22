print("欢迎来到ATM")
name = input("请输入你的姓名：")
money = 5000000
def menu():
    print("-" * 10 + "菜单" + "-" * 10)
    print(f"{name}你好，欢迎来到ATM，请选择操作")
    print("查询余额\t[输入1]")
    print("存款\t\t[输入2]")
    print("取款\t\t[输入3]")
    print("退出\t\t[输入4]")
    num = int(input("请输入你的选择："))
    return num
def find(title):
    if title:
        print("-" * 10 + "查询余额" + "-" * 10)
    print(f"{name}你好，你的余额为：{money}元")
def input_money():
    global money
    print("-" * 10 + "存款" + "-" * 10)
    in_money = int(input("请输入你要存款的金额："))
    if in_money > 0:
        money += in_money
        print(f"{name}，你好，你存款{in_money}元成功")
        find(False)
    else:
        print("对不起，你不能存入该金额")
        find(False)
def output_money():
    global money
    print("-" * 10 + "取款" + "-" * 10)
    out_money = int(input("请输入你要取款的金额："))
    if out_money > 0:
        if out_money <= money:
            money -= out_money
            print(f"{name}，你好，你取款{out_money}元成功")
            find(False)
        else:
            print("对不起，你的余额不足")
            find(False)
    else:
        print("对不起，你不能取出该金额")
        find(False)
while True:
    choice = menu()
    if choice == 1:
        find(True)
    elif choice == 2:
        input_money()
    elif choice == 3:
        output_money()
    elif choice == 4:
        print("欢迎下次光临，再见")
        break
    else:
        print("对不起，没有这种选项")
        continue