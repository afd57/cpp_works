#include <iostream>
#include <string>
using namespace std;

class Sekil
{
	string ad;
public:
	Sekil(string _ad)
	{
		ad=_ad;
	}
	virtual  double alan()=0;
	virtual void Yazdir()=0;
};//class Sekil

class Ucgen:public Sekil
{
	double taban,yukseklik;
public:
	Ucgen(double _taban,double _yukseklik,string _ad):Sekil(_ad)
	{
		taban=_taban;
		yukseklik=_yukseklik;
	}
	double alan()
	{
		return taban*yukseklik/2;
	}
	void Yazdir()
	{
		cout<<"ucgenin alanı ="<<alan();
	}
};//class Ucgen:public Sekil

class Dikdortgen:public Sekil
{
	double ks,uk;
public:
	Dikdortgen(int _uk,int _ks,string _ad):Sekil(_ad)
	{
		uk=_uk;
		ks=_ks;
	}
	double alan()
	{
		return uk*ks;
	}
	void Yazdir()
	{
		cout<<"dda="<<alan();
	}
};//class Dikdortgen


int main()
{
	Sekil *H[3];
	H[1]=new Ucgen(10,10,"ucgen");
	H[2]=new Dikdortgen(10,10,"dikdortgen");
	H[3]=new Ucgen(10,20,"ucgen");
	H[1]->alan();
	H[2]->alan();
	H[3]->alan();
}
