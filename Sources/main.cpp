	#include <iostream>
	#include <string>
	using namespace std;
	static int hayvan_sayisi=0;
	//********************************************************************************
#if 1
	class Hayvan
	{
	protected:
		int *kimlik_numarasi;
		string cins;
		string hayvan_ses;
	public:
		Hayvan(string _cins)
		{
			hayvan_sayisi++;
		}
		virtual void beslen()=0;
	};//class Hayvan

#endif
#if 0
		Hayvan()
		{
		}

		virtual void Besle()
		{
			//her bir hayvan türünün nasýl beslendiðini gösterecek
		}
		virtual void Bagýr(int kac_defa)
		{
		}
		virtual void Uret()
		{
			//herbir hayvanýn ürettiði miktarý ekranan yazdýrýr
		}
	};//class Hayvan
	//-*************************************************************************

	class Koyun:public Hayvan
	{
		int yun;
	public:
		Koyun()
		{  //*hata
			yun=rand()%5;
		}//yapici
		~Koyun()
		{
		}//yikici
		void Beslen()
		{
			cout<<"ot yer"<<endl;
		}
		void Bagýr(int kac_defa)
		{
			for(int i=kac_defa;i<kac_defa;i++)
			cout<<"MEE!"<<endl;
		}
		void Uret()
		{
			cout<<yun;
		}
	};//class Koyun:public Hayvan
	//************************************************************
	class Inek//:public Hayvan
	{
		int sut;
	public:
		Inek(string c)
		{//*hata
			do
			{
				cout<<"1500 ~ 500 arasinda bir deger girin"<<endl;
				cin>>sut;
			}
			while(sut<1500 && sut>500);
		}//yapici
		~Inek()
		{
		}//yikici
		void Beslen()
		{
			cout<<"Saman yer"<<endl;
		}
		void Uret()
		{
			cout<<sut;
		}
		void Bagýr(int kac_defa)
		{
			for(int i=kac_defa;i<kac_defa;i++)
			cout<<"MOO"<<endl;
		}
	};//class Ýnek:public Hayvan
	//*********************************************************************
	class Tavuk//:public Hayvan
	{
		int yumurta;
	public:
		Tavuk(int _yumurta):yumurta(_yumurta)
		{//*hata
		}//yapici
		~Tavuk()
		{
		}//yikici
		void Besle()
		{
			cout<<"Dari yer"<<endl;
		}
		void Bagýr(int kac_defa)
		{
			for(int i=kac_defa;i<kac_defa;i++)
			cout<<"GIDAK"<<endl;
		}
		void Uret()
		{
			cout<<yumurta;
		}
	};//class Tavuk:public Hayvan

	//***************************------MAÝN--------*********************************
#endif
	int main()
	{
		Hayvan.hayvan_sayisi(0);
		cout<<"Aziz Babanin Ciftigine Hosgeldiniz!!!!!!!!";
		Hayvan h1("at"),h2("esek"),h3("okuz");
	}