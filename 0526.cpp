dayT = {'h':'������', 'u':'���ڶ�'}
dayS = {'a':'������', 'u':'������'}
day = {'t':dayT,  's':dayS, 'm':'����һ', 'w':'������', 'f':'������'}
a=input('�����һ����ĸ:')
if a in day.keys():
       print(day[a])  
if a=='t' or a=='s':        
        b=input('������ڶ�����ĸ:') 
        if a=='t' and b in dayT.keys():
                    print(dayT[b])        
        if a=='s' and b in dayS.keys():
                    print(dayS[b])
