num = 100
def func_a():
    print(f"a：{num}")
def func_b():
    global num
    num = 200
    print(f"b：{num}")
func_a()
func_b()
print(f"外部：{num}")