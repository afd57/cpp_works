/*25_04_2012 C++ dersinin aynýsýdýr

Çok biçimlilik & Sanal(virtual) fonksiyonlat

-Önrmli Terimler
-Sanal Yýkýcý Fonksiyonlar

-Önrmli Terimler-
*/
/*	1)Uste Ata (UpCasting)
	Turetilen  sýnýfta oluþan nesnenin adresi temel sýnýfta 
	oluþan iþaretçi yada takma isme atanmasý olayýdýr.
*/
#include <iostream>
#include <string>
using namespace std;

class Calisan
{
public:
	int maas;
	string isim;
	Calisan()
	{
	}
	Calisan(string _isim,int _maas)
	{
		isim=_isim;
		maas=_maas;
	}
};//class Calisan

class Yonetici:public Calisan
{
public:
	string mevki;
	Yonetici()
	{
	}
	Yonetici(string _isim,int _maas,string _mevki)
	{
		isim=_isim;
		maas=_maas;
		mevki=_mevki;
	}
};//class onetici

int main()
{
	Yonetici y1("aziz",15000,"ceo");
	Calisan c1("ali",750);
	Calisan *c=&y1;
	Calisan &rc=y1;
	Calisan *c2=new Yonetici;
}


