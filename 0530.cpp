def turn(s):
    L = []
    for i in s:
        L.append(ord(i)) 
    return L
def main():
    s = str(input("请输入一个字符串："))
    print("字符串的ASCⅡ为：",turn(s))
main()
