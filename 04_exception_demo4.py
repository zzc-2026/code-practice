try:
    # 1 / 0
    # d = { }
    # print(d['haha'])
    open("haha.txt", "r", encoding = "UTF-8")
except Exception as e:
    print("出现问题了，问题的类型为：", e)