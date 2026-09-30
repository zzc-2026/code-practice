def f02():
    print("02start")
    # 1 / 0
    open("haha.txt", "r", encoding = "UTF-8")
    print("02end")
def f01():
    print("01start")
    f02()
    print("01end")
def main():
    f01()
main()
# try:
#    main()
# except Exception as e:
#     print("出现问题了，问题的类型为：", e)