#include <iostream>
#include <string>
using namespace std;


class Motor
{
	int hp,tork;
	string yakit;
	public:
	Motor(int _hp,int _tork,string _yakit)
	{
		hp=_hp;
		tork=_tork;
		yakit=_yakit;
	}
};//class Motor


class Reno
{
	string model;
	Motor m2;
public:
	Reno(string _model,int _hp,int _tork,string _yakit):m2(_hp,_tork,_yakit)
	{
	}
};//class Reno


class BMW
{
	string model;
	Motor m1;
public:
	BMW(string _model,int _hp,int _tork,string _yakit):m1(_hp , _tork , _yakit)
	{
	}
};//class Araba


int main()
{
	BMW b1("m1",100,300,"bezin");
	Reno r1("r1",100,200,"dizel");

}