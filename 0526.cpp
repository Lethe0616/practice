dayT = {'h':'星期四', 'u':'星期二'}
dayS = {'a':'星期六', 'u':'星期天'}
day = {'t':dayT,  's':dayS, 'm':'星期一', 'w':'星期三', 'f':'星期五'}
a=input('输入第一个字母:')
if a in day.keys():
       print(day[a])  
if a=='t' or a=='s':        
        b=input('请输入第二个字母:') 
        if a=='t' and b in dayT.keys():
                    print(dayT[b])        
        if a=='s' and b in dayS.keys():
                    print(dayS[b])
