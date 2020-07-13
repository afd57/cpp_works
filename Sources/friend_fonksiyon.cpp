#include <iostream>
/*
Arkada�lar bir birlerinin gizli bilgilerini bilirler ve
kimseyle paylasmazlar 

Burdaki friend classes ayn� �eyleri yaparlar;

baz� durumlarda class�n i�indek veriye ula�mam�z gerekebilir bunu
arkada�l�k fonksiyonlar� ile c�zecegiz;
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
	//�u �ekilde de tan�mlana bilir
	friend Dikdortgen kucult(Dikdortgen ddg,int m);// burda tan�t�p kodlamay� d��arda yapabiliriz
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