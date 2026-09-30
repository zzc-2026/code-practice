import time
s = time.time()
f = open("test.txt", "w", encoding = "UTF-8")
for i in range(1000000):
    f.write(str(i) + "\n")
    if i % 10000 == 0:
        print(i)
f.close()
end = time.time()
print(end - s)