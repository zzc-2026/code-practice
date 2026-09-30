f = open("D:/word.txt", "r", encoding = "UTF-8")
count = 0
for line in f.readlines():
    line = line.strip()
    for word in line.split(" "):
        if "itheima" == word:
            count += 1
print(f"文本中有{count}个“itheima”")
f.close()