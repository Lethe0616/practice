def turn(s):
    L = []
    for i in s:
        L.append(ord(i)) 
    return L
def main():
    s = str(input("������һ���ַ�����"))
    print("�ַ�����ASC��Ϊ��",turn(s))
main()
