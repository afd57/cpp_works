/*
Fonksiyon tan�mlan�rken de�eri le tan�ml� parametrelere  vars�lan de�erler atan�labilir
bu �ekilde tan�mlanm�� bir fonksiyon �a�r�l�rken arg�manlar�n de�erleri otamatik olarak
atan�r*/

//�rnek 

#include <iostream>
using namespace std;

int hacim(int en=1,int boy=1,int yuk=1)
{
	return en*boy*yuk;
}

int main()
{                         //Yap�lan i�lemler
	cout <<hacim()<<endl;		//1*1*1
	cout <<hacim(3)<<endl;		//3*1*1
	cout <<hacim(6)<<endl;		//6*1*1
	cout <<hacim(6,3)<<endl;	//6*3*1
	cout <<hacim(6,3,4)<<endl;	//6*3*4
}

//bu sistem ��yle kullan�labilir
//�cretli giri�ler i�in
/* Mesala arabam�z� park ettik ve otoparka araban� 1 saat koysanda ayn� para 
arabanla girip ��ksanda,*/
