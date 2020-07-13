#include <iostream>
#include <string>
using namespace std;


class Araba
{
	int hp;
	string yakit;
public:
	Araba(int _hp,string _yakit)
	{
		hp=_hp;
		yakit=_yakit;
	}
};//class Araba

class BMW:public Araba
{
	int fiyat;
public:
	BMW(int _hp,string _yakit,int _fiyat):Araba(_hp,_yakit)
	{
		fiyat=_fiyat;
	}
};//class Motor

class M3:public BMW
{
	int ss;
public:
	M3(int _hp,string _yakit,int _fiyat,int _ss):BMW(_hp,_yakit,_fiyat)
	{
		ss=_ss;
	}
}
int main()
{
	M3 m1(300,"benzin",30000,6);
}