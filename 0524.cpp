a = eval(input('请输入成绩：'))
if a >= 90:
    print("优")
elif a < 90 and a >= 80:
    print("良")
elif a < 80 and a >= 70:
    print("中")
elif a < 70 and a >= 60:
    print("及格")
else:
    print("不及格")
