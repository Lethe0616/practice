#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
int n;
while(cin >> n) //��������
{
cin.get(); //����س�
string name;
for(int i=0; i < n; i++) //���ֱַ���
{
bool quote = false;
getline(cin, name);
if (name.find(',') != string::npos ||
name.find(' ') != string::npos) //�ҵ����Ż��߿ո񣬾�Ҫ��˫����
{
quote = true;
}
if (quote)
{
putchar('\"'); //putcharЧ�ʸ���
}
std::cout << name;
if (quote)
{
putchar('\"');
}
if (i == n - 1) //����Ѿ������һ���ַ������ǾͲ��س�������Ӷ��źͿո�
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
return 0;
}
