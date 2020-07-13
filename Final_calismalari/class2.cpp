#include <iostream>
#include <string>
using namespace std;

class Ogrenci
{
	int num;
	double gno;
	string isim;
public:
	Ogrenci()
	{
		cin>>isim>>num>>gno;
	};
	Ogrenci(int _num,double _gno,string _isim)
	{
		num=_num;
		gno=_gno;
		isim=_isim;
	};
	void Yazdir();
};//class Ogrenci

void Ogrenci::Yazdir()
{
	cout<<isim<<num<<gno;
}

int main()
{
	Ogrenci o1,o2(10,3.2,"ali");
	o1.Yazdir();
	o2.Yazdir();
}