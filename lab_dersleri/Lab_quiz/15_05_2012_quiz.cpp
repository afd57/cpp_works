#include <iostream>
#include <string>
using namespace std;

class A
{
protected:
	int a;
public:
	A()
	{
		//
	}
	void ata(int _a)
	{
		_a=a;
	}
};//class A

class B:public A
{
protected:
	int b;
public:
	B(int _a,int _b)
	{
	}
};//class B
#if 0
class C:public B
{
protected:
	int c;
public:
	C(int _a,int _b,int _c)
	{
	}
	void Yazdir()
	{
		cout<<"A="<<A::Kac()<<"B="<<B::Kac()<<"C="<<C::Kac();
	}
};//class C
#endif

int main()
{
	B b1(1,2);
}