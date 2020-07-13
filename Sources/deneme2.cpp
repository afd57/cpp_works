#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
class Hayvan
{
protected:
	int kimlik_numarasi;
	static int hayvan_sayisi;
	string cins;
public:
	Hayvan(string _cins):cins(_cins)
	{
		hayvan_sayisi++;
		kimlik_numarasi=hayvan_sayisi;
	}
	virtual ~Hayvan()
	{
		hayvan_sayisi--;
	}
	// sanal saf fonksiyonlar   //
	virtual void beslen()=0;   //
	virtual void bagir(int kac)=0;   //
	virtual void uret()=0;   //
	//**********************//
};//class Hayvan
int Hayvan::hayvan_sayisi=0;


//****************************KOYUN**************************

class Koyun:public Hayvan
{
	int yun;
public:
	Koyun(string c="Koyun"):Hayvan(c)
	{
		srand(time(0));
		yun=rand()%5;
	}
	~Koyun()
	{
	}
	void beslen()
	{
		cout<<"OT yer"<<endl;
	}
	void bagir(int kac)
	{
		for(int i=0;i<kac;i++)
		cout<<"MEEEE"<<endl;
	}
	void uret()
	{
		cout<<yun<<"kg";
	}
};//class Koyun:public Hayvan


//****************************INEK***************************

class Inek:public Hayvan
{
	int sut;
public:
	Inek(string c="inek"):Hayvan(c)
	{
		do
		{
			cout<<"500 ile 1500 arasýnda"<<endl;
			cin>>sut;
		}
		while(sut <= 1500 || sut >= 500);
	}
	~Inek()
	{
	}
	void beslen()
	{
		cout<<"Saman Yer"<<endl;
	}
	void bagir(int kac)
	{
		for(int i=0;i<kac;i++)
		cout<<"MOO!"<<endl;
	}
	void uret()
	{
		cout<<sut<<endl;
	}
};//class Inek:public Hayvan



//****************************TAVUK**************************

class Tavuk:public Hayvan
{
	int yumurta;
public:
	Tavuk(string c="Tavuk"):Hayvan(c)
	{
		do
		{
			cout<<"100 ile 300 arasýnda"<<endl;
			cin>>yumurta;
		}
		while(yumurta <= 300 || yumurta >= 100);
	}
	~Tavuk()
	{
	}
	void beslen()
	{
		cout<<"Dari yer"<<endl;
	}
	void bagir(int kac)
	{
		for(int i=0;i<kac;i++)
		cout<<"GIDAK!"<<endl;
	}
	void uret()
	{
		cout<<yumurta<<"tane"<<endl;
	}
};//class Tavuk:public Hayvan



//*************************INT MAÝN**************************

int main()
{
	int t_s,i_s,k_s;
	cout<<"Aziz Babanin Ciftligine Hosgeldiniz!!@"<<endl;
	Hayvan *animal[100];
	cout<<"Koyun , Inek & Tavuk Sayisini Giriniz :";
	cin>>k_s>>i_s>>t_s;

#if 1
	for(int i=0;i<koyun_sayisi+inek_sayisi+tavuk_sayisi;i++)
	{
		if(i<koyun_sayisi)
			h1[koyun_sayisi]=new Koyun();
		else if(i<koyun_sayisi+inek_sayisi)
			h1[i]=new Inek;
		else if(i<koyun_sayisi+inek_sayisi+tavuk_sayisi)
			h1[i]=new Tavuk();
	}
#endif
}