#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
using std::ofstream;
using namespace std;
//sorunsuz
class Hayvan
{
protected:
	int kimlik_numarasi;
	static int hayvan_sayisi;
	string cins;
public:
	//????????????????*****GIZLILIK KORUnDu*********???????????
	//?****??????????????????????????????
	Hayvan(string _cins):cins(_cins)
	{
		hayvan_sayisi++;
		kimlik_numarasi=hayvan_sayisi;
		//cout<<cins<<"'un kimlik numarasi : "<<kimlik_numarasi<<endl;
	}
	int get_kn()
	{
		return kimlik_numarasi;
	}
	string get_cins()
	{
		return cins;
	}
	virtual ~Hayvan()
	{
		hayvan_sayisi--;
	}
	int hayvan_s()
	{
		return hayvan_sayisi;
	}
	//     sanal saf fonksiyonlar      //
	virtual void beslen()=0;          //
	virtual void bagir(int kac)=0;   //
	virtual void uret()=0;          //
	//*****************************//
};//class Hayvan
int Hayvan::hayvan_sayisi=0;


//****************************KOYUN**************************

class Koyun:public Hayvan
{
	int yun;
public:
	Koyun(string c="Koyun"):Hayvan(c)
	{
		yun=rand()%5;
		srand(time(0));
	}
	~Koyun()
	{
	}
	void beslen()
	{
		//cout<<Hayvan.cins<<Hayvan.kimlik_numarasi<<endl;
		cout<<Hayvan::cins<<Hayvan::kimlik_numarasi<<"  OT yer"<<endl;
	}
	void bagir(int kac)
	{
		for(int i=0;i<kac;i++)
		cout<<"MEEEE"<<endl;
	}
	void uret()
	{
		//cout<<Hayvan.cins<<Hayvan.kimlik_numarasi<<endl;
		cout<<Hayvan::cins<<Hayvan::kimlik_numarasi<<" yillik "<<yun<<" kg "<<" yun uretir"<<endl;
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
		while(sut <=! 1500 && sut >=! 500);
	}
	~Inek()
	{
	}
	void beslen()
	{
		//cout<<Hayvan.cins<<Hayvan.kimlik_numarasi<<endl;
		cout<<Hayvan::cins<<Hayvan::kimlik_numarasi<<"  Saman Yer"<<endl;
	}
	void bagir(int kac)
	{
		for(int i=0;i<kac;i++)
		cout<<"MOO!"<<endl;
	}
	void uret()
	{
		//cout<<Hayvan.cins<<Hayvan.kimlik_numarasi<<endl;
		cout<<Hayvan::cins<<Hayvan::kimlik_numarasi<<" yillik "<<sut<<"litre sut uretir"<<endl;
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
		while((100 <! yumurta <! 300));
	}
	~Tavuk()
	{
		//boþ
	}
	void beslen()
	{
		//cout<<Hayvan.cins<<Hayvan.kimlik_numarasi<<endl;
		cout<<Hayvan::cins<<Hayvan::kimlik_numarasi<<"Dari yer"<<endl;
	}
	void bagir(int kac)
	{
		for(int i=0;i<kac;i++)
		cout<<"GIDAK!"<<endl;
	}
	void uret()
	{
		//cout<<Hayvan.cins<<Hayvan.kimlik_numarasi<<endl;
		cout<<Hayvan::cins<<Hayvan::kimlik_numarasi<<" yillik "<<yumurta<<" tane "<<endl;
	}
};//class Tavuk:public Hayvan



//*************************INT MAÝN**************************

int main()
{
	ofstream ofs("grup2.txt");
	int t_s,i_s,k_s;
	cout<<"Aziz Babanin Ciftligine Hosgeldiniz!!@"<<endl;
	ofs<<"Aziz Babanin Ciftligine Hosgeldiniz!!@"<<endl;
	cout<<"--------------------------------------"<<endl;
	ofs<<"--------------------------------------"<<endl;
	Hayvan *H1[100];
	cout<<"Koyun , Inek & Tavuk Sayisini Giriniz :";
	ofs<<"Koyun , Inek & Tavuk Sayisini Giriniz :";
	cin>>k_s>>i_s>>t_s;
	ofs<<k_s<<"\t"<<i_s<<"\t"<<t_s<<endl;
	ofs<<"----------------------------------------"<<endl;
	cout<<"----------------------------------------"<<endl;
	for(int i=0;i<k_s+i_s+t_s;i++)
	{
		if(i<k_s)
			H1[i]=new Koyun();
		else if(i<k_s+i_s)
			H1[i]=new Inek;
		else if(i<k_s+i_s+t_s)
			H1[i]=new Tavuk();
	}
	
	for(int i=0;i<k_s+i_s+t_s;i++)
	{
		cout<<H1[i]->get_cins()<<"Kimlik numarasi : "<<H1[i]->get_kn()<<endl;
		ofs<<H1[i]->get_cins()<<" Kimlik numarasi : "<<H1[i]->get_kn()<<endl;
	}
	cout<<"-----------------------------------------"<<endl;
	ofs<<"-----------------------------------------"<<endl;
	cout<<"Mevcut Haysan Sayisi = "<<H1[(k_s+i_s+t_s)-1]->hayvan_s()<<endl;
	ofs<<"Mevcut Haysan Sayisi = "<<H1[(k_s+i_s+t_s)-1]->hayvan_s()<<endl;
	cout<<"----------------------------------------"<<endl;
	ofs<<"----------------------------------------"<<endl;
	ofs.close();
	int n;
	srand(time(0));
	for(int i=0;i<k_s+i_s+t_s;i++)
	{
		n=rand()%5;
		H1[i]->beslen();
		H1[i]->bagir(n);
		H1[i]->uret();
		//bagir ciktida yok
	}
}