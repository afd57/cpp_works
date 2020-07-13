//11/04/2012 tarihinde i�lenen ders

/*
Olu�turulan nesne yap�s� derleme zaman�nda(copmpiletime) ger�ekle�iyorsa bu tip nesneleri otamatik olarak 
kopyalamak m�mk�nd�r.
*/

//�rnekle G�relim

#include <iostream>
using namespace std;

#if 1
//copy constructer ve overloading operator kullan�lmadan 
class Reel_Dizi
{
	int boyut;
	double *dizi;
public:
	Reel_Dizi(int b):boyut(b)
	{
		dizi = new double [boyut];
	}
	~Reel_Dizi()
	{
		delete [] dizi;
	}
	friend istream & operator >>(istream is,Reel_Dizi &a)
	{
		for(int n=0;n<a.boyut;n++)
		{
			is>>a.dizi[n];
		}
		return is;
	}
};//class Reel_Dizi

int main()
{
	Reel_Dizi a(3);
	cin>>a;
	Reel_Dizi b=a;
	Reel_Dizi c(5);
	//c=a;

}

#else
//Karmasik sayilarla ilgili bir �rnek

class Z
{
	int g,s;
public:
	Z(int _g,int _s):g(_g),s(_s)
	{
	}
};//class Z

//________________________________main_______________________________________________
int main()
{
	Z a(1,2);
	Z c=a;  //2
	Z b=a; //3
}

/*
Not burada compiel time da oldu�u i�in otomatikman ger�ekle�ir
Ancak cal��ma zamanl�(Run Time) olu�turuluyorsa sat�r 2 ve 3 te yap�lan i�lemleri 
copy constructer ve overloaded Assigment operator ile yapacaz;
*/
#endif