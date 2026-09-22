def my_len(data):
    length = 0
    for i in data:
        length += 1
    return length
name = "xiaozhang"
print(f"{name}的长度为：{my_len(name)}")
info = "人民万岁"
print(f"{info}的长度为：{my_len(info)}")