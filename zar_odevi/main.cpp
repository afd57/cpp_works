#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//static int puan=0;
class Zar
{
	int z;
	//static int puan;
public:
	static int puan;
	int _puan()
	{
		puan=0;
	}
	int puan_d()
	{
		return puan;
	}
	void Zar_At()
	{   
		z=1+rand()%6;
		//srand(time(0));
	}
	int sonuc() const
	{
		return z;
	}
	~Zar()
	{

	}
};//class zar


class Oyun
{
	Zar z1,z2;
public:
	Oyun()
	{
		z1._puan();
		srand(time(0));
		cout<<"Zar Atma Oyununa Hosgeldiniz!\n";
	}
	void Oyna()
	{
		for(int i=0;i>=0;i++)
		{
			z1.Zar_At();
			z2.Zar_At();
			if(z1.sonuc()+z2.sonuc()==12)
			{
				cout<<"["<<i<<"]"<<":"<<"Zar1 = "<<z1.sonuc()<<"\t";
				cout<<"Zar2 = "<<z2.sonuc()<<endl;
				cout<<"Game Over!\n"<<"Toplam Puan ="<<puan_sorgula()<<endl;
				int k;
				break;
			}
			else if(z1.sonuc()==z2.sonuc())
			{
				puan=puan+10;
			}
			cout<<"["<<i<<"]"<<":"<<"Zar1 = "<<z1.sonuc()<<"\t";
			cout<<"Zar2 = "<<z2.sonuc()<<"  "<<"Puan = "<<puan_sorgula()<<endl;
		}//for
	}// void Oyna
	int puan_sorgula()
	{
		return puan;
	}
};//class Oyun

int main()
{
	Oyun o1,o2;
	o1.Oyna();
	o2.Oyna();
}