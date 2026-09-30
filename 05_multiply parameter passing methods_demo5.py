def func(name, age, *args, **kwargs):
    print(f"我是{name}，今年{age}岁，我的爱好有：",end = "")
    for arg in args:
        print(arg, end=" ")
    print()
    print("其他信息为：", end="")
    for kwarg in kwargs:
        print(f"{kwarg}：{kwargs[kwarg]}", end=" ")
    print()
func("小张", 18, "唱", "跳", "rap", "篮球", address = "合肥", id = 123, money = 20000)