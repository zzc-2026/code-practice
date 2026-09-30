import B
B.say_hello()
B.wangwang()
print(B.add(1, 2))
print(B.name)
print(B.age)
print(B.height)
from B import say_hello, wangwang
say_hello()
wangwang()
from B import *
say_hello()
wangwang()
print(add(1, 2))
print(name)
print(age)
print(height)
from C import *
from C import miao
wangwang()
hello()
info()
miao()