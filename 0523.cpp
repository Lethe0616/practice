a = float(input('请输入三角形边长a: '))
b = float(input('请输入三角形边长b: '))
c = float(input('请输入三角形边长c: '))
 
s = (a + b + c) / 2
 
print('三角形三边分别为：''a=',a,'b=',b,'c=',c)
area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
print('三角形面积= %f' %area)
