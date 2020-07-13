/*Temel veri tiplerini tan�mlarken  de�er atamas� yapmak

int n=102;
E�itleme �le De�er Atar

int n(102);
�yeye �zg� ilk de�er atar

Nesneye ait ilk de�eri atamak yap�c�(Constructs) fonksiyonlar taraf�ndan sa�lan�r.

*/

/*
Constructs �zellikleri 
1) S�n�f ismi ile ayn� olacak 
2) return tipi olmayacak
3) Birden fazla constructer tan�mlayabiliriz(fonksiyonlarda oldu�u gibi)
*/

//�rnek 
#include <iostream>
#include <string>
//#include "ogreci_class.h"
using namespace std;
//#if 1
//___________________________________________________________________________________
//#else
class ogrenci
{
public:
	ogrenci()
	{
		cout<<"isim numara genelnotort arada bosluk birakin";
		cin>>isim>>num>>gno; //classlarda de�i�kenler�n �ncelik s�ras� yoktur
		//istedi�imiz zaman tan�mlaya biliriz
	}
	ogrenci(string i,int n,double g)
	{
		isim=i;
		num=n;
		gno=g;
	}
	void yazdir()
	{
		cout<<isim<<','<<num<<','<<gno<<endl;
	}
private:
	string isim;
	int num;
	double gno;
	

};// class ogrenci// buradaki kodlar� kullanmayada biliriz
//
//#endif
//#include "ogreci_class.h" dolay� bu kodlar� kullanmam�za gerek yok
//_____________________________________________________________________________________
//________________________________main__________________________________________________
int main()
{
	ogrenci ogr1;
	ogr1.yazdir();
	ogrenci ogr2("aziz",111502004,3.04);
	ogr2.yazdir();
}