#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
using std::ofstream;


class A
{
	int a,b;
public:
	A()
	{
		a=rand();
		b=rand();
	}
	friend ofstream & operator << (ofstream &ofs , A &og)
	{
		ofs<<og.a<<endl<<og.b<<endl;
		return ofs;
	}
};

int main()
{
	ofstream ofs("deneme.txt");
	A a;
	ofs<<a;
	ofs.close();
}