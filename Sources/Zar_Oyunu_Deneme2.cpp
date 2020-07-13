#include <iostream>
#include <cstdlib>
#include <ctime>
//bu soru composit sýnýflar la ilgili
using namespace std;
//********************class Zar ####**************************
class Zar
{
	int *yuzey;
public:
	friend Zar ZarAt(Zar & z1,Zar & z2);
	friend Zar sýfýrla(Zar & z1 , Zar & z2);
	int sonuc()
	{
		return *yuzey;
	}
};//class Zar
//********************class Zar #END***************************

Zar ZarAt(Zar & z1 , Zar & z2)
{

	return z1,z2;
}
Zar sýfýrla(Zar & z1 , Zar & z2)
{
	delete z1.yuzey;
	delete z2.yuzey;
	return z1;
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
//********************class Oyun ####**************************
class Oyun
{
	Zar z1,z2;
	static int puan;
public:
	Oyun()
	{
		cout<<"Zar Atma Oyununa Hosgeldiniz!"<<endl;
		//sýfýrla(z1,z2);
	}
	void oyna()
	{
		int _z1,_z2;
		for(int i=0;i<20;i++)
		{
		ZarAt(z1,z2);
		_z1=z1.sonuc();
		_z2=z2.sonuc();
		cout<<z1.sonuc()<<'\t'<<z2.sonuc()<<endl;
		sýfýrla(z1,z2);
		}
		cin>>_z1;
	}
};//class Oyun
//********************class Oyun #END**************************
int main()
{
	Oyun o1;
	o1.oyna();
}