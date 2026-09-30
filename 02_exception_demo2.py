try:
    open("heima.txt", "r", encoding = "UTF-8")
except ZeroDivisionError as e:
    print("出现错误了，不能除以0")
    print(e)