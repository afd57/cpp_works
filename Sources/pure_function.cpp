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
	//Saf sanal fonksiyonlar yeniden tan�mlan�yor (Madde 1)
	void parcaIsmiYaz()
	{
		cout<<"Anakart"<<endl;
	}
};//class Anakart: public Parca
//***********************************************************************
class Ram: public Parca
{
public:
	//Saf sanal fonksiyonlar yeniden tan�mlan�yor (Madde 1)
	void parcaIsmiYaz()
	{
		cout<<"Ram"<<endl;
	}
};//class Ram: public Parca
//************************************************************************
int main()
{
	//Hata Soyut s�n�ftan nesne t�retemeyiz.(Madde 3)
	//Parca p;
	//Soyunt s�n�ftan i�aret�i t�retilebilir.(Madde 3)
	Parca *ptr;
	Anakart a;
	Ram r;

	/*�al��ma An� �ok bi�imlili�i. Sanal fonksiyonun bize sa�lad���
	avantajlardan biri. Duruma g�re "ptr" i�aretcsinin hangi t�rden bir nesneyi
	i�aret edece�i �al��ma an�nda belli olacak.*/
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