//class yapýlarýnda tanýmladýðýmýz fonksiyonlar vardý
// class_yapisi_ile_nyp calismasinda fonksiyonlar normalde programýn 
//karýþýklýðýný gidermek için kullanýlýr
// mesela facebook ta bir class yapýsý düþünelim 
// class da seninle ilgili bilgileirn yanýsýra arkadaþlarýnlada ilgili bilgiler 
// ekrana bastýrýlýr bu kadar kodu bir yere yazmak kodun okunmasýný güçleþtirir
// bu yüzden fonksiyon tanýmlama yöntemi ile artýk iþlemlerimizi yapacaz

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


//'::' kapsama alaný tanýmlama operatoru****************************

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