#include <iostream>
using namespace std;

#if 1

class A
{
public:
	int a;
	A()
	{
		a=1;
	}
	void printA()
	{
		cout<<"A:"<<a<<endl;
	}
};//class A

class B:public A
{
public:
	int a;//global ve yerel de�i�kenler gibi
	B()
	{
		a=3;
	}
	void printB()
	{
		cout<<"B:"<<a<<endl;
	}
};//class B

int main()
{
	B b1;
	b1.printA();
	b1.printB();
}
#else
class A
{
public:
	int a;
	A()
	{
		a=1;
		cout<<"A contructed.."<<endl;
	}
	~A()
	{
		cout<<"A Destructed.."<<endl;
	}
	void printA()
	{
		cout<<"A ="<<a<<endl;
	}
};//class A
//_----------------------------------------------------------------------------


class A2:virtual public A
{
public:
	A2()
	{
		a=2;
		cout<<"A2 contructed.."<<endl;
	}
	~A2()
	{
		cout<<"A2 Destructed.."<<endl;
	}
	void printA2()
	{
		cout<<"A2 ="<<a<<endl;
	}
};//class A


//-----------------------------------------------------------------------------------
class B:virtual public A,public A2
{
public:
	B()
	{
		a=3;
		cout<<"B contructed.."<<endl;
	}
	~B()
	{
		cout<<"B Destructed.."<<endl;
	}
	void printB()
	{
		cout<<"B ="<<a<<endl;
	}
};//class B:public A
//***********************************************************************************
int main()
{
	B  b1;
	b1.printA();
	b1.printA2();
	b1.printB();
	//ilk �nce A contruck edilir ondansonra B edilir ��nk�
	// B class�nda A dan t�retilmi� data memberlar var 
	//Bunlar� kullana bilmek i�in �nce A y� construct etmeli
	//int a=1;//break point koyabilimek i�in yapt�k


}
#endif