s1 = "itheima哈哈666"
print(s1[7])
print(s1[-6])
# s[-6] = "b"
print(s1)
s1 = "abc"
print(s1.index("bc"))
s1 = "小张|小李|小王"
s2 = s1.replace("|", ",")
print("old：", s1)
print("new：", s2)
s3 = s1.split("|")
print("字符串本身：", s1)
print("分隔后：", s3)
s4 = "  \nitheima666\n  "
s5 = s4.strip()
print(s5)
s6 = "|||itheima|||"
s7 = s6.strip("|")
print(s7)
s8 = s6.replace("|", "")
print(s8)
s9 = "itheimaaaaaa"
num1 = s9.count("a")
print(num1)
s10 = "abc123你好#！@ "
num2 = len(s10)
print(num2)