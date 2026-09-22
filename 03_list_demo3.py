lst1 = ["itheima", "python", "666"]
print(lst1.index("itheima"))
print("666" in lst1)
# print(lst1.index("itcast"))
lst2 = [1, 2, 3]
lst2[0] = 5
print(lst2)
lst2[-2] = 10
print(lst2)
lst3 = [1, 2, 3]
lst3.insert(1, "itcast")
lst3.insert(5, "it")
print(lst3)
lst4 = [1, 2, 3]
lst4.append("itcast")
print(lst4)
lst5 = [1, 2, 3]
lst5.extend([4, 5, 6])
print(lst5)
lst6 = [1, 2, 3]
del lst6[0]
print(lst6)
lst7 = [1, 2, 3]
deleted_data = lst7.pop(0)
print(f"被删除的是：{deleted_data}")
print(lst7)
lst8 = [1, 2, 3, 2, 3]
lst8.remove(3)
print(lst8)
lst9 = [1, 2, 3]
# lst9 = []
lst9.clear()
print(lst9)
lst10 = [1, 1, 1, 2, 3]
num1= lst10.count(1)
print(num1)
lst11 = [1, 2, 3, 4, 5]
num2 = len(lst11)
print(num2)