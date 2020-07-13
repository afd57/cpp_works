/// yazdirma basitt

#include <iostream>
#include <fstream>

using namespace std;
using std::ofstream;
using std::ifstream;
#if 0
class A
{
protected:
	int maas;
public:
	A(int _maas):maas(_maas)
	{
	}
	friend ofstream & operator << (ofstream & ofs , A &a)
	{
		ofs<<a.maas<<endl;
		return ofs;
	}

};//class A

class B:public A
{
	string mevki;
	int a;
public:
	B(int _maas,string _mevki):A(_maas),mevki(_mevki)
	{
	}
	friend ofstream & operator << (ofstream & ofs , B &b)
	{
		ofs<<b.mevki<<b.maas;
		return ofs;
	}
};//class B

int main()
{
	ofstream ofs("basit.txt");
	A a1(100);
	B b1(1000,"ceo");
	ofs<<a1;
	ofs<<b1;
	ofs.close();
}
#endif
class Okul
{
	string tip;
public:
	Okul(string _tip):tip(_tip)
	{
	}
};//class Okul

class Ogrenci
{
	int no;
	string isim;
	double gno;
public:
	/*Ogrenci(string _isim,int _no,double _gno):isim(_isim),no(_no),gno(_gno)
	{
	}*/
	friend istream & operator >> (istream &in , Ogrenci &ogr)
	{
		in>>ogr.no>>ogr.gno;
		return in;
	}
	friend ofstream & operator << (ofstream &ofs , Ogrenci &ogr)
	{
		ofs<<ogr.isim<<ogr.no;
		return ofs;
	}
};//class Ogrenci

class Ogretmen:public Okul
{
	int maas;
	string brans;
public:
	Ogretmen(string _brans,int _maas):Okul("Ogretmen"),brans(_brans),maas(_maas)
	{
	}
};//class Ogretmen


int main()
{
	Okul *O1[3];
	O1[1]=new Ogrenci/*("aziz",1111,3.1)*/;
	O1[2]=new Ogretmen("Mat",1000);
	O1[3]=new Ogretmen("Turk",2000);
}