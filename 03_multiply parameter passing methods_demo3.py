def func1(name, *args):
    print(f"我们是：{name}，我们的成员有：")
    for arg in args:
        print(arg)
    print(type(args))
func1("黑马天团", "小张", "小李", "小王")
# func("小张", "小李", "小王", "黑马天团")
# func("小张", "小李", "小王", name = "黑马天团")
def func2(name, *people, age):
    print(f"我们是：{name}，我们的成员有：")
    for p in people:
        print(p)
    print(age)
func2("黑马天团", "小张", "小李", "小王", age = 10)
# func2("黑马天团", "小张", "小李", "小王", 10)
print("你好", "我好", "大家好", "他不好", end = "\t")