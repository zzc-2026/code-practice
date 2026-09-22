def func_a():
    print("11111")
def func_b():
    print("22222")
    func_a()
    print("33333")
def func_c():
    print("44444")
    func_b()
    print("55555")
func_c()