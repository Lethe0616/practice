class B
{
public:
virtual void TestFunc1();
virtual void TestFunc2();
virtual void TestFunc3();
int b;
}

void TestVirtual1(B* pb)
{
pb->FunTest1();
pb->FunTest2();
pb->FunTest3();
pb->FunTest4();//编译失败，没有定义
}

class D:public B
{
public:
virtual void TestFunc1();
virtual void TestFunc3();
virtual void TestFunc4();
int d;
}

int main()
{
B b;
D d;
TestVirtual1(&b);
TestVirtual1(&d);
return 0;
}

