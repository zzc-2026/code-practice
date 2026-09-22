def say_hello():
    print("Hello World")
x = say_hello()
print(x)
print(type(x))
if not None:
    print("Hello World")
def check_age(age):
    if age < 18:
        return None
    return "Success"
if check_age(10):
    print("成年人")
else:
    print("未成年人")
age = None
for i in range(5):
    age = int(input("请输入你的年龄："))
    print(f"age：{age}")
print("最后一个同学的年龄为%d岁" % age)