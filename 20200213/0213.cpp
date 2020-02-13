class Person
{
public:
virtual void Buy(){
};

class Student:public Person
{
public:
virtual void Buy(){
};

class Solder:public Person
{
public:
virtual void Buy(){
}
};

void Ticket(Person& p)
{
p.Buy();
}

int mian()
{
Student stu;
Solder sol;
Ticket(stu);
Ticket(sol);
}

