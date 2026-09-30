def func1(**kwargs):
    print(kwargs)
    print(type(kwargs))
func1(name = "小张", id = 1, age = 10, gender = "男", address = "合肥")
def func2(name, age, *args, **kwargs):
    print(f"元组收集：{args}")
    print(f"字典收集：{kwargs}")
func2("小李", 11, 1, 2, 3, 4, 5, id = 1, gender = "男", address = "合肥")