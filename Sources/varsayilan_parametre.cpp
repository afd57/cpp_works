/*
Fonksiyon tanýmlanýrken deðeri le tanýmlý parametrelere  varsýlan deðerler atanýlabilir
bu þekilde tanýmlanmýþ bir fonksiyon çaðrýlýrken argümanlarýn deðerleri otamatik olarak
atanýr*/

//örnek 

#include <iostream>
using namespace std;

int hacim(int en=1,int boy=1,int yuk=1)
{
	return en*boy*yuk;
}

int main()
{                         //Yapýlan iþlemler
	cout <<hacim()<<endl;		//1*1*1
	cout <<hacim(3)<<endl;		//3*1*1
	cout <<hacim(6)<<endl;		//6*1*1
	cout <<hacim(6,3)<<endl;	//6*3*1
	cout <<hacim(6,3,4)<<endl;	//6*3*4
}

//bu sistem þöyle kullanýlabilir
//ücretli giriþler için
/* Mesala arabamýzý park ettik ve otoparka arabaný 1 saat koysanda ayný para 
arabanla girip çýksanda,*/
