/*   ___________________________
	|							|
	|	       ��RENC�	        |
	|							| //not + ile g�sterilenler hem i�  
	|___________________________|   hem d�� eri�ime a��k demektir\\
	|							|
	|    + �S�M	                |
	|	 + NUM 	            	|>>>DATE MEMBERS
	|	 + GNO					|
	|							|
	|___________________________|
	|							|
	|	+ tan�mla       		|
	|	+ yazdir()              |>> MEMBER FUNCT�ON
	|							|
	|							|
	|___________________________|*/

#include <iostream>
#include <string>

using namespace std;

struct ogrenci
{
	string isim;//char isim[�dm] tan�mlamaktan daha pratik boyutunu kendi ayarlar
	int num;
	double gno;

	void tan�mla(const string is,const int n,const double g)
	{
		isim=is;
		num=n;
		gno=g;
	}
	void yazdir()
	{
		cout<<isim<<','<<num<<','<<gno;
	}
};//struct �grenci

int main()
{
	ogrenci ogr;
	ogr.tan�mla("ali",2222,2.54);
	ogr.yazdir();
	ogr.isim="kaya";//gizlilik ihmali
	/* Nesneye y�nelik programlaman�n en �nemli unsurlar�ndan birisi encoprulation
	|| information hiding bilgi gizlemedir
	Yukar�da g�r�ld��� gibi ogr.isim="kaya"; gizlilik ihlalidir
	Dolay�s�yla struct ile s�n�f tan�mlama tavsiye edilmez*/
}

