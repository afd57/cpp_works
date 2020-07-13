/*   ___________________________
	|							|
	|	      ogrenci			|
	|							|
	|___________________________|
	|							|
	|    - isim	                |
	|	 - num            		|>> - D�� eri�ime Kapal�
	|	 - gno					|>>date member
	|							|
	|___________________________|
	|							|
	|	+tanimla				|
	|	+yazd�r					|
	|							|
	|							|
	|___________________________|
	�rnekte g�relim
	*/


//�rnek
#include <iostream>
#include <string>
using namespace std;
class ogrenci
{
private://i� eri�ime izinverme gizlili�i sa�la
	string isim; //not string komutu std:: olmadan �al��maz
	int num;
	double gno;
public://i� eri�im yasa��n�n sonu
	void tanimla(const string i,const int n,const double g)
		//const yazmaktaki ama� verinin herhangibir de�i�ikli�e u�ramas�n�
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
	//birde gizlilik ihlal edilmi�mi diye kontrol edelim
	//ogr.gno=3.7; diyerek kontrol edecez
	//resimdede g�r�ld��� gibi derleyici bu kodu derlemez
	//ogr.gno=3.7;
}