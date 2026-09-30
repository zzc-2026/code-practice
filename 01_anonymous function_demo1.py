def func(compute):
    result = compute(1, 2)
    print(result)
def compute(a, b):
    return a + b
func(compute)