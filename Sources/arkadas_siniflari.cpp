#include <iostream>
#include <string>
using namespace std;
// friend_fonksiyon.cpp a��klamalar burda
// burda bir s�n�f� bir fonksiyona arkada� yapm��t�k 
// �imdi iki s�n�f� birbirine arkada� yapacaz

class Ogrenci;
class Ders
{
	string d_ism;
	friend class Ogrenci;
public:
	Ders()
	{
		cout<<"Ders adi;";
		cin>>d_ism;
	}
};//class ders
//*************************************************************

class Ogrenci
{
	int num;
	Ders dersler[];
public:
	Ogrenci()
	{
		cin>>dersler[2].d_ism;
	}
	void kayitli_ogrenci()
	{
		for(int n=0;n<2;n++)
		{
			cout<<dersler[n].d_ism<<endl;
		}
	}
};//class Ogrenci




int main()
{
	Ogrenci ogr;
}