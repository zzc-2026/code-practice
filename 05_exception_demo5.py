try:
    # 1 / 0
    print(1)
except Exception as e:
    print("出现问题了，问题的类型为：", e)
else:
    print("一切正常")