// C++ dilinde ayný isimle hem yerel hemde global deðiþken tanýmlamak
// mümkündür

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
	//burdaki mantýk þudur yerel olanýn daima önceliði
	//ama  bunu double sayi=2.5e-2; etkisiz býrakýrsak
	//sayi=102 olur;
	//deneyelim
	sayi; //102 görüldüðü gibi
	//KULLANIMI:
	// Eðer yer fonksiyonun içindeki deðiþkeni kullanmak istiyorsanýz 
	// degiskenadi direk böyle yazarsýnýz
	// amam global deðiþkeni kullanmak istiyorsanýz 
	// ::degiskenadi þeklinde tanýmlanýr derleyici bunu otomatik algýlar
	// Yerel global ayrýmýný derleyici yapar.
}