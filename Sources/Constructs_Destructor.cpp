/*Temel veri tiplerini tanýmlarken  deðer atamasý yapmak

int n=102;
Eþitleme Ýle Deðer Atar

int n(102);
üyeye özgü ilk deðer atar

Nesneye ait ilk deðeri atamak yapýcý(Constructs) fonksiyonlar tarafýndan saðlanýr.

*/

/*
Constructs özellikleri 
1) Sýnýf ismi ile ayný olacak 
2) return tipi olmayacak
3) Birden fazla constructer tanýmlayabiliriz(fonksiyonlarda olduðu gibi)
*/

//örnek 
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
		cin>>isim>>num>>gno; //classlarda deðiþkenlerþn öncelik sýrasý yoktur
		//istediðimiz zaman tanýmlaya biliriz
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
	

};// class ogrenci// buradaki kodlarý kullanmayada biliriz
//
//#endif
//#include "ogreci_class.h" dolayý bu kodlarý kullanmamýza gerek yok
//_____________________________________________________________________________________
//________________________________main__________________________________________________
int main()
{
	ogrenci ogr1;
	ogr1.yazdir();
	ogrenci ogr2("aziz",111502004,3.04);
	ogr2.yazdir();
}