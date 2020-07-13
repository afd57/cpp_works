#include <iostream>
#include <fstream>

using namespace std;
using std::ofstream;
using std::ifstream;

class Okul
{
	string tip;
public:
	Okul(string _tip):tip(_tip)
	{
	}
};//class Okul

class Ogrenci:public Okul
{
	int no;
	string isim;
	double gno;
public:
	Ogrenci(string _isim,int _no,double _gno):isim(_isim),no(_no),gno(_gno),Okul("Ogrenci")
	{
	}
	Ogrenci():Okul("Ogrenci")
	{
	}
	friend istream & operator >> (istream &in , Ogrenci &ogr)
	{
		in>>ogr.isim>>ogr.no>>ogr.gno;
		return in;
	}
	friend ofstream & operator << (ofstream &ofs , Ogrenci &ogr)
	{
		ofs/*<<ogr.isim*/<<ogr.no;
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