//
#include <iostream>
#include <string>
using namespace std;

class ogrenci
{
	string isim;
	int num,sifre;
	double gno;
public:
	void tan�mla(const string _isim, const int _num, const double _gno)
	{
		isim=_isim;
		num=_num;
		gno=_gno;
	}
	void yazdir()
	{
		cout<<isim<<'/'<<num<<'/'<<gno<<'/'<<sifre;
	}
	//d��arda fonksiyon tan�mlama
	void sifre_ata();
};//class ogrenci
void ogrenci::sifre_ata()
{
	sifre=rand();
}

int main()
{
	ogrenci o1;
	o1.tan�mla("aziz",111502004,3.04);
	o1.sifre_ata();
	o1.yazdir();
}