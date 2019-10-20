#include<stdio.h>
#include<iostream>

using namespace std;

#if 0
class Person
{
public:
    void Print()
    {
        cout << "name:" << _name << endl;
        cout << "age:" << _age << endl;
    }
protected:
    string _name = "peter"; // ����
    int _age = 18;  // ����
};

class Student : public Person
{
protected:
    int _stuid; // ѧ��
};
 
class Teacher : public Person
{
protected:
    int _jobid; // ����
};
 
int main()
{
    Student s;
    Teacher t;
    s.Print();
    t.Print();
 
    return 0;
}
#endif

#if 0
class Person
{
protected :
    string _name; // ����
    string _sex;  // �Ա�
    int _age;    // ����
};
class Student : public Person
{
public :
    int _No ; // ѧ��
};
void Test ()
{
    Student sobj ;
    Person pobj = sobj ;
    Person* pp = &sobj;
    Person& rp = sobj;
    
    sobj = pobj;
    
    pp = &sobj
    Student* ps1 = (Student*)pp; 
    ps1->_No = 10;
    
    pp = &pobj;
    Student* ps2 = (Student*)pp;
    ps2->_No = 10;
}
#endif

#if 0
class A
{
public:
    void fun()
    {
        cout << "func()" << endl;
    }
};
class B : public A
{
public:
    void fun(int i)
    {
        A::fun();
        cout << "func(int i)->" <<i<<endl;
    }
};
 
void Test()
{
    B b;
    b.fun(10);
};
#endif

#if 0
public :
    Person(const char* name = "peter")
        : _name(name )
    {
        cout<<"Person()" <<endl;
    }
    
    Person(const Person& p)
        : _name(p._name)
    {
        cout<<"Person(const Person& p)" <<endl;
    }
    
    Person& operator=(const Person& p )
    {
        cout<<"Person operator=(const Person& p)"<< endl;
        if (this != &p)
            _name = p ._name;
        
        return *this ;
    }
    
    ~Person()
    {
        cout<<"~Person()" <<endl;
    }
protected :
    string _name ; // ����
};
 
class Student : public Person
{
public :
    Student(const char* name, int num)
        : Person(name )
        , _num(num )
    {
        cout<<"Student()" <<endl;
    }
    
    Student(const Student& s)
        : Person(s)
        , _num(s ._num)
    {
        cout<<"Student(const Student& s)" <<endl ;
    }
    
    Student& operator = (const Student& s )
    {
        cout<<"Student& operator= (const Student& s)"<< endl;
        if (this != &s)
        {
            Person::operator =(s);
    {
        A::fun();
        cout << "func(int i)->" <<i<<endl;
    }
};
 
void Test()
{
    B b;
    b.fun(10);
};
class Person
{
_num = s ._num;
        }
        return *this ;
    } 
    
    ~Student()
    {
        cout<<"~Student()" <<endl;
    }
protected :
    int _num ; //ѧ��
};
void Test ()
{
    Student s1 ("jack", 18);
    Student s2 (s1);
    Student s3 ("rose", 17);
    s1 = s3 ;
}
#endif

#if 0
class Person
{
public :
    Person () {++ _count ;}
protected :
    string _name ; // ����
public :
    static int _count; // ͳ���˵ĸ�����
};
int Person :: _count = 0;
class Student : public Person
{
protected :
    int _stu Num ; // ѧ��
};
class Graduate : public Student
{
protected :
    string _seminar Course ; // �о���Ŀ
};
void Test Person()
{
    Student s1 ;
    Student s2 ;
    Student s3 ;
    Graduate s4 ;
    cout <<" ���� :"<< Person ::_count << endl;
    Student ::_count = 0;
    cout <<" ���� :"<< Person ::_count << endl;
}
#endif

#if 0
class Person
{
public :
    string _name ; // ����
};
class Student : public Person
{
protected :
    int _num ; //ѧ��
};
class Teacher : public Person
{
protected :
    int _id ; // ְ�����
};
class Assistant : public Student, public Teacher
{
protected :
    string _major Course ; // ���޿γ�
};
void Test ()
{
    Assistant a ;
    a._name = "peter";
    a.Student::_name = "xxx";
    a.Teacher::_name = "yyy";
}
#endif

#if 0
class A
{
public:
    int _a;
};
 
// class B : public A
class B : virtual public A
{
public:
    int _b;
};
 
// class C : public A
class C : virtual public A
{
public:
    int _c;
};
 
class D : public B, public C
{
public:
    int _d;
};
 
int main()
{
    D d;
    d.B::_a = 1;
    d.C::_a = 2;
    d._b = 3;
    d._c = 4;
    d._d = 5;
 
    return 0;
}
#endif

#if 0
class Car{
   protected:
    string _colour = "��ɫ";  // ��ɫ
    string _num = "��ABIT00";    // ���ƺ�
   };
   
   class BMW : public Car{
   public:
    void Drive() {cout << "�ÿ�-�ٿ�" << endl;}
   };
   
   class Benz : public Car{
   public:
    void Drive() {cout << "����-����" << endl;}
   };
   
   class Tire{
   protected:
       string _brand = "Michelin";  // Ʒ��
       size_t _size = 17;            // �ߴ�
   };
   
   class Car{
   protected:
    string _colour = "��ɫ";      // ��ɫ
    string _num = "��ABIT00";     // ���ƺ�
    Tire _t;                     // ��̥
   };
#endif
