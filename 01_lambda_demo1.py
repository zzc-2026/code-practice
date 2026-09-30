def func(compute):
    result = compute(1, 2)
    print(result)
func(lambda x, y: x + y)
func(lambda x, y: x - y)
func(lambda x, y: x * y)
func(lambda x, y: x / y)
mul = lambda x, y: x * y
print(mul(4, 5))