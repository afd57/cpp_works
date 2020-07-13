#include <iostream>
#include<ctime>
#include<cstdlib>
//#include <cstdlib>
using namespace std;

//__________________________________________________________________________________________

class Zar
{
	int yuzey;
public:
	void ZarAt()
	{
		int sayi;
		srand(time(0));
		sayi=(rand()%6)+1;
		yuzey=sayi;
	}
	int sonuc()
	{
		ZarAt();
		int _z=this->yuzey;
		return _z;
	}
};//class Zar

class Oyun
{
	Zar z1,z2;
	static int puan;
public:
	Oyun(int _z1,int _z2)
	{
		_z1=z1.sonuc();
		_z2=z2.sonuc();
	}
	void oyna()
	{

		//int _z1=1,_z2=1;
		Oyun.z1;
		for(int i=1;Oyun.z1+Oyun.z2>1;i++)
		{
			static int puanSorgula;
			z1.sonuc();
			z2.sonuc();
			if(_z1==_z2 && _z1+_z2!=12)
		{
			puanSorgula+10;
			cout<<'['<<i<<']'<<"Zar1="<<_z1<<'\t'<<"Zar2="<<_z2<<"Puan="<<puanSorgula<<endl;
			
		}
		else
			cout<<'['<<i<<']'<<"Zar1="<<_z1<<'\t'<<"Zar2="<<_z2<<"Puan="<<puanSorgula<<endl;
		if(_z1+_z2==12)
		{
			cout<<'['<<i<<']'<<"Zar1="<<_z1<<'\t'<<"Zar2="<<_z2<<endl;
			cout<<"Game Over";
			cout<<"Toplam Puan="<<puanSorgula;
			break;
		}

		}//for döngüsü
	}
};//class Oyun

int main()
{
	Oyun o1;
	o1.oyna();
}