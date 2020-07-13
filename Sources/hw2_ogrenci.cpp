#include <iostream>
#include <string>
using namespace std;

class Ders
{
	string ders_adi;
	int ders_krd,not;
	double puan;
	char harfNOTU;
public:
	Ders()
	{
		cout<<"Ders adi: ";
		cin>>ders_adi;
		cout<<"Kredisi: ";
		cin>>ders_krd;
		cout<<"Puani: ";
		cin>>puan;
		HarfNotuHesapla();
		getHarfNotu();
	}
	void HarfNotuHesapla()
	{
		if(puan>=90)
			harfNOTU='A';
		else if(puan>=80)
			harfNOTU='B';
		else if(puan>=70)
			harfNOTU='C';
		else if(puan>=60)
			harfNOTU='D';
		else if(puan>=1)
			harfNOTU='F';
	}
	void getHarfNotu()
	{
		if(harfNOTU=='A')
			not=4;
		else if(harfNOTU=='B')
			not=3;
		else if(harfNOTU=='C')
			not=2;
		else if(harfNOTU=='D')
			not=1;
		else if(harfNOTU=='F')
			not=0;
	}
	string getDersAdi()
	{
		return ders_adi;
	}
	int getKredi()
	{
		return ders_krd;
	}
};//class Ders


//**************************************************************************************************************************

class Ogrenci
{
	string ogrenci_adi;
	int ogr_no;
	double gno;
	Ders *liste;
public:
	Ogrenci()
	{
		cout<<"Ogrenci Bilgi Sistemine Hosgeldiniz: "<<endl<<"**********************************"<<endl;
		cout<<"Ogrencinin Ad & Numarasi: ";
		cin>>ogrenci_adi>>ogr_no;
		for(int i=0;i<3;i++)
		{
			liste=new Ders[3];
			liste[i];
		}
	}
	double GenelNO()
	{
		for(int i=0;i<=2;i++)
		{
			return gno;
		}
	}

};//class Ogrenci

int main()
{
	Ogrenci o1;
}