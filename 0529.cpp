a = input("请输入一个三位正整数：")
p = list(a)
num = []
for i in p:
num.append(eval(i))

sum = 0
for j in num:
    sum += pow(j, 3)
print(‘各位数的立方和是：’,(sum))
