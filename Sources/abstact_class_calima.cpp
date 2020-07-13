#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Hayvan
{
	string sekil_adi;
public:
	Hayvan(string _sekil_adi):sekil_adi(_sekil_adi)
	{
	}
	virtual void Beslen()=0;
	virtual void Bagir(int kac)=0;
	virtual void Uret()=0;
};//class Sekil


//******************************************************************
class Koyun:public Hayvan
{
	double alan,taban,yukseklik;
public:
	Koyun(string c="ucgen"):Hayvan(c)
	{
		srand(time(0));
		taban=rand()%5;
		yukseklik=rand()%5;
	}
	void Beslen()
	{
		cout<<"OT YER!"<<endl;
	}
	void Bagir()
	{
		cout<<"MEE!"<<endl;
	}
	void Uret()
	{
		cout<<yukseklik<<"KG Sut"<<endl;
	}
};//class Koyun



class Inek:public Hayvan
{
	double alan,uzunluk;
public:
	Inek(string c="Kare"):Hayvan(c)
	{
		do
		{
			cout<<"Inek Sut KG 500 ile 1500 Arasi";
			cin>>uzunluk;
		}
		while(uzunluk<=1500 || uzunluk >=500);
	}
	void Beslen()
	{
		cout<<"Saman YER!"<<endl;
	}
	void Bagir()
	{
		cout<<"MOoOoO!"<<endl;
	}
	void Uret()
	{
		cout<<uzunluk<<"KG Sut"<<endl;
	}
};//class Inek


class Tavuk:public Hayvan
{
	double alan,k�sa_k,uzun_k;
public:
	Tavuk(string c="Dikdortgen"):Hayvan(c)
	{
		do
		{
			cout<<"Yumurta Say�s� a -- b ";
			cin>>k�sa_k>>uzun_k;
		}
		while(k�sa_k<=300 || k�sa_k>=100);
	}
	void Beslen()
	{
		cout<<"DARI YER!"<<endl;
	}
	void Bagir()
	{
		cout<<"G�dak!"<<endl;
	}
	void Uret()
	{
		cout<<k�sa_k<<"Tane Yumurta"<<endl;
	}};//class Tavuk


int main()
{
	int ks,us,ds;
	Hayvan *S[10];
	cout<<"Koyun �nek Tavuk sayisi gir"<<endl;
	cin>>ks>>ds>>us;
	for(int i=0;i<(ks+us+ds);i++)
	{
		if(i<ks)
			S[i]=new Koyun;
		else if(i<ks+ds)
			S[i]=new Inek;
		else if(i<ks+ds+us)
			S[i]=new Tavuk;
	}
	for(int i=0;i<(ks+us+ds);i++)
	{
		cout<<"alan::"<<S[i]->Alan()<<"\t"<<endl;
		S[i]->Uzunluk();
	}
}