// C++ dilinde ayn� isimle hem yerel hemde global de�i�ken tan�mlamak
// m�mk�nd�r

#include <iostream>

using namespace std;

int sayi=102;//global

void hangisi()
{
	cout<<sayi<<endl;
}

int main()
{
	double sayi=2.5e-2;
	cout<<sayi<<endl;//0.025
	hangisi();//102
	cout<<::sayi<<endl;//102
	//burdaki mant�k �udur yerel olan�n daima �nceli�i
	//ama  bunu double sayi=2.5e-2; etkisiz b�rak�rsak
	//sayi=102 olur;
	//deneyelim
	sayi; //102 g�r�ld��� gibi
	//KULLANIMI:
	// E�er yer fonksiyonun i�indeki de�i�keni kullanmak istiyorsan�z 
	// degiskenadi direk b�yle yazars�n�z
	// amam global de�i�keni kullanmak istiyorsan�z 
	// ::degiskenadi �eklinde tan�mlan�r derleyici bunu otomatik alg�lar
	// Yerel global ayr�m�n� derleyici yapar.
}