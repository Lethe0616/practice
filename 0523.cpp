a = float(input('�����������α߳�a: '))
b = float(input('�����������α߳�b: '))
c = float(input('�����������α߳�c: '))
 
s = (a + b + c) / 2
 
print('���������߷ֱ�Ϊ��''a=',a,'b=',b,'c=',c)
area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
print('���������= %f' %area)
