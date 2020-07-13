/*25_04_2012 C++ dersinin ayn�s�d�r

�ok bi�imlilik & Sanal(virtual) fonksiyonlat

-�nrmli Terimler
-Sanal Y�k�c� Fonksiyonlar

-�nrmli Terimler-
*/
/*	1)Uste Ata (UpCasting)
	Turetilen  s�n�fta olu�an nesnenin adresi temel s�n�fta 
	olu�an i�aret�i yada takma isme atanmas� olay�d�r.
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


