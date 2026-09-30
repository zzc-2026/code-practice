f = open("D:/practice.txt", "r", encoding = "UTF-8")
# f = open("practice.txt", "r", encoding = "UTF-8")
# content = f.read()
# print(content)
# lst = f.readlines()
# print(type(lst))
# print(lst)
# for line in f.readlines():
#     line = line.strip()
#     print(line)
print(f.readline().strip())
print(f.readline().strip())
print(f.readline().strip())
# while True:
#     pass
f.close()