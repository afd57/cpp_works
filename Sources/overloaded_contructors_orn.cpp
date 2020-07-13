#include <iostream>
#include <string>

using namespace std;

class foo
{
private:
	char p;
	int n;
public:
	foo()
	{
		cout<<"1 de";
	}
	foo(char cp):p(cp)
	{
		cout<<"2 de"<<cp<<endl;
	}
	foo(int in):n(in)
	{
		cout<<"3 de"<<in<<endl;
	}
	foo(int in,char cp):n(in),p(cp)
	{
		cout<<"4 de"<<in<<','<<cp<<endl;
	}
	foo(char cp,int in):n(in),p(cp)
	{
		cout<<"5 de"<<in<<','<<cp<<endl;
	}



};//class foo



int main()
{
	foo f1;
	foo f2('A');
	foo f3(102);
	foo f4(102,'A');
	foo f5('c',2);
}