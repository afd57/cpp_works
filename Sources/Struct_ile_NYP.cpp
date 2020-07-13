/*   ___________________________
	|							|
	|	       ÖÐRENCÝ	        |
	|							| //not + ile gösterilenler hem iç  
	|___________________________|   hem dýþ eriþime açýk demektir\\
	|							|
	|    + ÝSÝM	                |
	|	 + NUM 	            	|>>>DATE MEMBERS
	|	 + GNO					|
	|							|
	|___________________________|
	|							|
	|	+ tanýmla       		|
	|	+ yazdir()              |>> MEMBER FUNCTÝON
	|							|
	|							|
	|___________________________|*/

#include <iostream>
#include <string>

using namespace std;

struct ogrenci
{
	string isim;//char isim[ýdm] tanýmlamaktan daha pratik boyutunu kendi ayarlar
	int num;
	double gno;

	void tanýmla(const string is,const int n,const double g)
	{
		isim=is;
		num=n;
		gno=g;
	}
	void yazdir()
	{
		cout<<isim<<','<<num<<','<<gno;
	}
};//struct ögrenci

int main()
{
	ogrenci ogr;
	ogr.tanýmla("ali",2222,2.54);
	ogr.yazdir();
	ogr.isim="kaya";//gizlilik ihmali
	/* Nesneye yönelik programlamanýn en önemli unsurlarýndan birisi encoprulation
	|| information hiding bilgi gizlemedir
	Yukarýda görüldüðü gibi ogr.isim="kaya"; gizlilik ihlalidir
	Dolayýsýyla struct ile sýnýf tanýmlama tavsiye edilmez*/
}

