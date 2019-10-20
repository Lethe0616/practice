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
    string _name = "peter"; // 姓名
    int _age = 18;  // 年龄
};

class Student : public Person
{
protected:
    int _stuid; // 学号
};
 
class Teacher : public Person
{
protected:
    int _jobid; // 工号
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
    string _name; // 姓名
    string _sex;  // 性别
    int _age;    // 年龄
};
class Student : public Person
{
public :
    int _No ; // 学号
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
    string _name ; // 姓名
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
    int _num ; //学号
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
    string _name ; // 姓名
public :
    static int _count; // 统计人的个数。
};
int Person :: _count = 0;
class Student : public Person
{
protected :
    int _stu Num ; // 学号
};
class Graduate : public Student
{
protected :
    string _seminar Course ; // 研究科目
};
void Test Person()
{
    Student s1 ;
    Student s2 ;
    Student s3 ;
    Graduate s4 ;
    cout <<" 人数 :"<< Person ::_count << endl;
    Student ::_count = 0;
    cout <<" 人数 :"<< Person ::_count << endl;
}
#endif

#if 0
class Person
{
public :
    string _name ; // 姓名
};
class Student : public Person
{
protected :
    int _num ; //学号
};
class Teacher : public Person
{
protected :
    int _id ; // 职工编号
};
class Assistant : public Student, public Teacher
{
protected :
    string _major Course ; // 主修课程
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
    string _colour = "白色";  // 颜色
    string _num = "陕ABIT00";    // 车牌号
   };
   
   class BMW : public Car{
   public:
    void Drive() {cout << "好开-操控" << endl;}
   };
   
   class Benz : public Car{
   public:
    void Drive() {cout << "好坐-舒适" << endl;}
   };
   
   class Tire{
   protected:
       string _brand = "Michelin";  // 品牌
       size_t _size = 17;            // 尺寸
   };
   
   class Car{
   protected:
    string _colour = "白色";      // 颜色
    string _num = "陕ABIT00";     // 车牌号
    Tire _t;                     // 轮胎
   };
#endif
