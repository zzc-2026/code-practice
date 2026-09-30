fr = open("D:/bill.txt", "r", encoding = "UTF-8")
fw = open("D:/bill.bak.txt", "w", encoding = "UTF-8")
for line in fr.readlines():
    line = line.strip()
    if line.split(",")[2] == "测试":
        continue
    fw.write(line + "\n")
fr.close()
fw.close()