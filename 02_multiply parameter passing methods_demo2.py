def user_info1(name, age, gender = "男"):
    print(f"我叫{name}，今年{age}岁，性别为{gender}")
user_info1("小张", 22)
user_info1("小美", 23, "女")
def user_info2(name, age = 10, gender = "男"):
    print(f"我叫{name}，今年{age}岁，性别为{gender}")
# def user_info3(name, age = 10, gender):
#     print(f"我叫{name}，今年{age}岁，性别为{gender}")