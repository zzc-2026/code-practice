try:
    # 1 / 0
    1 + 1
except Exception as e:
    print("出现问题了，问题的类型为：", e)
else:
    print("一切正常")
finally:
    print("有没有问题我都执行")