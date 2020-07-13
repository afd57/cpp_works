#include <iostream>
/*
Arkadaþlar bir birlerinin gizli bilgilerini bilirler ve
kimseyle paylasmazlar 

Burdaki friend classes ayný þeyleri yaparlar;

bazý durumlarda classýn içindek veriye ulaþmamýz gerekebilir bunu
arkadaþlýk fonksiyonlarý ile cözecegiz;
*/


class Dikdortgen
{
	int en,boy;
public:
	void set(int a,int b)
	{
		en=a;
		boy=b;
	}
	int alan()
	{
		return en*boy;
	}
	friend Dikdortgen buyut(Dikdortgen ddg,int m)
	{
		Dikdortgen d;
		d.en=ddg.en*m;
		d.boy=ddg.boy*m;
		return d;
	}
	//þu þekilde de tanýmlana bilir
	friend Dikdortgen kucult(Dikdortgen ddg,int m);// burda tanýtýp kodlamayý dýþarda yapabiliriz
};//class Dikdortgen

Dikdortgen kucult(Dikdortgen ddg,int m)
{
	Dikdortgen d1;
	d1.en=ddg.en/2;
	d1.boy=ddg.boy/2;
	return d1;
}
int main()
{
	Dikdortgen d1,d2;
	d1.set(10,20);
	d2.set(10,20);
	d1=buyut(d1,2);
	d2=kucult(d2,2);
}