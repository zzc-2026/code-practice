try:
    f = open("lalala.txt", "r", encoding = "UTF-8")
except:
    f = open("lalala.txt", "w", encoding = "UTF-8")
    content = f.read()
    print(content)
    f.close()