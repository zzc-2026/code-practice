my_set = {"c", "a", "b", "c"}
my_set.add("d")
print(my_set)
my_set.remove("d")
print(my_set)
element = my_set.pop()
print(element)
print(my_set)
my_set.clear()
print(my_set)
set1 = {1, 2, 3}
set2 = {1, 5, 6}
set3 = set1.difference(set2)
print("原有set1：", set1)
print("原有set2：", set2)
print("差集：", set3)
set1.difference_update(set2)
print("改后set1：", set1)
set4 = set1.union(set2)
print("并集：", set4)
print(len(set4))
for item in set4:
    print(item)
set5 = {1, "c", 3, "b", 5, "a"}
print(set5)