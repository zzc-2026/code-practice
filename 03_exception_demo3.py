try:
    # 1 / 0
    open("it.txt", "r", encoding = "UTF-8")
except (ZeroDivisionError, FileNotFoundError) as e:
    print("出现错误了，错误的类型是：", e)
try:
    # 1 / 0
    # open("it.txt", "r", encoding="UTF-8")
    d = { }
    print(d['hahaha'])
except FileNotFoundError as e:
    print("文件没找到", e)
except ZeroDivisionError as e:
    print("除以0", e)
except KeyError as e:
    print("没找到Key", e)