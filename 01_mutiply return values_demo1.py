def func():
    return 1, 2
x, y = func()
print(x, y)
print(type(x), type(y))
z = func()
print(z)
print(type(z))