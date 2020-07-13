#include <iostream>
using namespace std;

class Parca
{
public:
	//Saf Sanal Fonksiyon
	virtual void parcaIsmiYaz()=0;
};//class Parca
//**********************************************************************
class Anakart: public Parca
{
public:
	//Saf sanal fonksiyonlar yeniden tanýmlanýyor (Madde 1)
	void parcaIsmiYaz()
	{
		cout<<"Anakart"<<endl;
	}
};//class Anakart: public Parca
//***********************************************************************
class Ram: public Parca
{
public:
	//Saf sanal fonksiyonlar yeniden tanýmlanýyor (Madde 1)
	void parcaIsmiYaz()
	{
		cout<<"Ram"<<endl;
	}
};//class Ram: public Parca
//************************************************************************
int main()
{
	//Hata Soyut sýnýftan nesne türetemeyiz.(Madde 3)
	//Parca p;
	//Soyunt sýnýftan iþaretçi türetilebilir.(Madde 3)
	Parca *ptr;
	Anakart a;
	Ram r;

	/*Çalýþma Aný çok biçimliliði. Sanal fonksiyonun bize saðladýðý
	avantajlardan biri. Duruma göre "ptr" iþaretcsinin hangi türden bir nesneyi
	iþaret edeceði çalýþma anýnda belli olacak.*/
	for (int i =0;i<9;i++)
	{
		if (rand()%2)
		{
			//Anakart
			ptr = &a;
			ptr = &r;
		}
		else
		{
			//Ram
			ptr = &r;
		}
		ptr->parcaIsmiYaz();
		r.parcaIsmiYaz();
	}//for (int i =0;i<9;i++)**********
}//int main