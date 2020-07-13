#include <iostream>
#include <string>
using namespace std;

class A
{
public:
	int a;
};//class A

class A2:virtual public A
{
public:
	int a2;
};//class B

class B:virtual public A2,virtual public A
{
	B()
	{
		a=3;
	}
}
int main()
{
}