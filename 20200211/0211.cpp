#include "iostream"
using namespace std;
 
class Complex
{
private:
	int a;
	int b;
	friend ostream& operator<<(ostream &out, Complex &c1);  // ostream��ϵͳ�Դ�cout������
 
public:
	Complex(int a = 0, int b = 0)
	{
		this->a = a;
		this->b = b;
	}
	void printCom()
	{
		cout<<a<<"+"<<b<<"i"<<endl;
	}
};
 
 
ostream  &operator<<(ostream &out, Complex &c1)    //�������ֳ�ȥ
{
	cout<<"12345,��ɽ���ϻ�"<<endl;
	cout<<c1.a<<"+"<<c1.b<<"i"<<endl;
	return out;
}
 
//1���������أ�������ͨ������ʵ�ֵġ�
int main()
{
	Complex c1(1, 2), c2(3, 4); 
	int a = 10;
	//char *p = "abc";
	//cout<<a<<endl;  //��ȷ
	//cout<<c1<<endl;  //��ȷ
	
	//cout<<c1<<"��ʽ��̲���"<<endl;   //���Զ���<<����� ��û����ӡ<<�����Զ���棨��ʽ�ṹ��
	//operator<<(cout,c1),cout���������
	//��ʽ��̣�c1<<"***" �ȼ���void<<"***";����
 
	//��������ֵ����ֵ��ʱ����Ҫ����һ����������ã� û�з�����cout��������Ӻ���operator<<��ֻ��ͨ��ȫ�ֺ���ʵ��.
	//��Ԫ����������֮��
	cout.operator<<(c1);
	return 0;
}
