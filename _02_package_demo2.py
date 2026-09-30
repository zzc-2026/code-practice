import _01_package_demo1.module1
import _01_package_demo1.module2 as m2
_01_package_demo1.module1.hi()
m2.hello_world()
from _01_package_demo1 import module1
module1.hi()
from _01_package_demo1.module1 import hi
hi()