//class yap�lar�nda tan�mlad���m�z fonksiyonlar vard�
// class_yapisi_ile_nyp calismasinda fonksiyonlar normalde program�n 
//kar���kl���n� gidermek i�in kullan�l�r
// mesela facebook ta bir class yap�s� d���nelim 
// class da seninle ilgili bilgileirn yan�s�ra arkada�lar�nlada ilgili bilgiler 
// ekrana bast�r�l�r bu kadar kodu bir yere yazmak kodun okunmas�n� g��le�tirir
// bu y�zden fonksiyon tan�mlama y�ntemi ile art�k i�lemlerimizi yapacaz

//ornek

#include <iostream>
#include <string>

using namespace std;
//__________________________________CLASS______________________________________________


class ogrenci //class ogrenci basladi
{
private:
	string isim;
	int num;
	double gno;
public:
	void tanimla(const string i,const int n,const double g);
	void yazdir();

};//class ogrenci bitti


//__________________________________CLASS SONU____________________________________________________



//fonksiyonlar classin altina yazilir
//_____________________________tanimla fonksiyonu_______________________________________________
void ogrenci::tanimla(const string i,const int n,const double g)
{
	isim=i;
	num=n;
	gno=g;
}
//__________________________ tanimla fonksiyonu sonu_________________________________________________


//'::' kapsama alan� tan�mlama operatoru****************************

//__________________________________yazdir fonksiyonu_____________________________________________


void ogrenci::yazdir()
{
	cout<<isim<<','<<num<<','<<gno;
}


//_________________________yazdir fonksiyonu sonu_________________________________________________
int main()
{
	ogrenci ogr;
	ogr.tanimla("aziz",111502004,3.04);
	ogr.yazdir();
	cout<<endl<<"hangisi daha okunur sen kararver";
}