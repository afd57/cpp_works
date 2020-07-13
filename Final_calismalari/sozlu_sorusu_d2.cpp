#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
using std::ofstream;
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
	friend ofstream & operator << (ofstream &ofs , Hayvan &h1)
	{
		ofs<<h1.cins<<h1.kimlik_numarasi<<"\t";
	}

};//class Hayvan
int Hayvan::hayvan_sayisi=0;


//****************************KOYUN**************************
class Koyun:public Hayvan
{
	int yun,*yun1;
public:
	Koyun(string c="Koyun"):Hayvan(c)
	{
		srand(time(0));
		yun1 = new int ;
		*yun1=rand()%5;
		yun=*yun1;
		delete yun1;
		//yun_Ata();
	}
	~Koyun()
	{
	}
	void yun_Ata()
	{
		yun=rand()%5;
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
	friend ofstream & operator << (ofstream &ofs , Koyun &ky)
	{
		ofs<<ky.cins<<"\tKimlik Numarasi:"<<ky.kimlik_numarasi<<"\t Urun:"<<ky.yun;
		return ofs;
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
			cout<<"500 ile 1500 aras�nda"<<endl;
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
	friend ofstream & operator << (ofstream &ofs , Inek &ky)
	{
		ofs<<ky.cins<<"\tKimlik Numarasi:"<<ky.kimlik_numarasi<<"\t Urun:"<<ky.sut;
		return ofs;
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
			cout<<"100 ile 300 aras�nda"<<endl;
			cin>>yumurta;
		}
		while((100 <! yumurta <! 300));
	}
	~Tavuk()
	{
		//bo�
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
		friend ofstream & operator << (ofstream &ofs , Tavuk &ky)
	{
		ofs<<ky.cins<<"\tKimlik Numarasi:"<<ky.kimlik_numarasi<<"\t Urun:"<<ky.yumurta;
		return ofs;
	}
};//class Tavuk:public Hayvan



//*************************INT MA�N**************************

int main()
{
	int t_s,i_s,k_s;
	ofstream ofs("ciftlik.txt");
	cout<<"Aziz Babanin Ciftligine Hosgeldiniz!!@"<<endl;
	cout<<"--------------------------------------"<<endl;
	Hayvan *H1[100];
	cout<<"Koyun , Inek & Tavuk Sayisini Giriniz :";
	cin>>k_s>>i_s>>t_s;
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
	}
	cout<<"-----------------------------------------"<<endl;
	cout<<"Mevcut Haysan Sayisi = "<<H1[(k_s+i_s+t_s)-1]->hayvan_s()<<endl;
	cout<<"----------------------------------------"<<endl;
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
	for(int i=0;i<k_s+i_s+t_s;i++)
	{
		ofs<<H1[i];
	}
	ofs.close();
}