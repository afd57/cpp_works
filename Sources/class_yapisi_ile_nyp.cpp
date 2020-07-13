/*   ___________________________
	|							|
	|	      ogrenci			|
	|							|
	|___________________________|
	|							|
	|    - isim	                |
	|	 - num            		|>> - Dýþ eriþime Kapalý
	|	 - gno					|>>date member
	|							|
	|___________________________|
	|							|
	|	+tanimla				|
	|	+yazdýr					|
	|							|
	|							|
	|___________________________|
	örnekte görelim
	*/


//örnek
#include <iostream>
#include <string>
using namespace std;
class ogrenci
{
private://iç eriþime izinverme gizliliði saðla
	string isim; //not string komutu std:: olmadan çalýþmaz
	int num;
	double gno;
public://iç eriþim yasaðýnýn sonu
	void tanimla(const string i,const int n,const double g)
		//const yazmaktaki amaç verinin herhangibir deðiþikliðe uðramasýný
		// engellemek
	{
		isim=i;
		num=n;
		gno=g;
	}

	void yazdir()
	{
		cout<<isim<<','<<num<<','<<gno;
	}
};//class ogrenci

int main()
{
	ogrenci ogr;
	ogr.tanimla("aziz",11502004,3.04);
	ogr.yazdir();
	//deneme1 basarili bir sekilde calisiyor
	//birde gizlilik ihlal edilmiþmi diye kontrol edelim
	//ogr.gno=3.7; diyerek kontrol edecez
	//resimdede görüldüðü gibi derleyici bu kodu derlemez
	//ogr.gno=3.7;
}