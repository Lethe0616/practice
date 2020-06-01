s=input('请输入一个字符串:\n')
letters=0
space=0
digit=0
others=0
for c in s:
    if c.isalpha():
        letters+=1
    elif c.isspace():
        space+=1
    elif c.isdigit():
        digit+=1
    else:
        others+=1
print('英文字母：%d,空格：%d,数字：%d,其他字符：%d'%(letters,space,digit,others))
