a = input("������һ����λ��������")
p = list(a)
num = []
for i in p:
num.append(eval(i))

sum = 0
for j in num:
    sum += pow(j, 3)
print(����λ�����������ǣ���,(sum))
