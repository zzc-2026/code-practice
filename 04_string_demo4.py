name = "小张"
age = 11
height = 172.55
message1 = "我是" + name + "，今年" + str(age) + "岁，身高为" + str(height) + "厘米"
print(message1)
message2 = "我是%s，今年%d岁，身高为%f厘米" % (name, age, height)
print(message2)
message3 = "我是%s，今年%s岁，身高为%s厘米" % (name, age, height)
print(message3)