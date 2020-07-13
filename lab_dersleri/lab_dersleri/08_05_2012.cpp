//contructors in derived class
#include <iostream>
#include <string>
using namespace std;

class Dortgen
{
	int a,b;
public:
	Dortgen(int _a,int _b):a(_a),b(_b)
	{
	}
	virtual void print()
	{
		cout<< endl << a << " " << b << "Alan= " << a*b;
	}
};//class Dortgen
class Kare:public Dortgen
{
public:
	Kare(int _a):Dortgen(_a,_a)
	{
	}
	void print()	
	{
	}
};//class Kare:public Dortgen

void print(Dortgen *d)
{
	d->print();
}

int main()
{
	Dortgen d(4,5);
	Kare k(7);
	print(&d);
	print(&k);
}

#if 0
class Employee
{
	string name;
	int salary;
public:
	Employee(string _name,int _salary)
	{
		name = _name;
		salary = _salary;

	}
	void print()
	{
		cout<< name << " " << salary ;
	}
};//class Employee

class Manager:public Employee
{
	int level;
public:
	Manager(string _name, int _salary,int _level):Employee(_name,_salary),level(_level)
	{
	}
	virtual void print()
	{
		Employee::print();
		cout << "level=" << level << endl;
	}
};//class Manager:public Employee

void print(Employee *e)
{
	e->print();
}

int main()
{
	Manager  Mng("Ahmet",10000,1);
	Mng.print();
	Manager Mng2("Aziz",150000,80);
	Mng2.print();
	print(&Mng2);
	getchar();
}
#endif

#if 0 
class A
{
	int a;
public:
	A(int _a)
	{
		a=_a;
	}
	void print()
	{
		cout << a << endl;
	}
};//class A
class B:public A
{
public:
	B(int _a):A(_a) // B den gelene deðer A ya verilir....
	{
	}
};//class B:public A
//*****************************************************

int main()
{
	B b(3);
	b.print();
}
#endif