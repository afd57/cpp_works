//11/04/2012 tarihinde iþlenen ders

/*
Oluþturulan nesne yapýsý derleme zamanýnda(copmpiletime) gerçekleþiyorsa bu tip nesneleri otamatik olarak 
kopyalamak mümkündür.
*/

//Örnekle Görelim

#include <iostream>
using namespace std;

#if 1
//copy constructer ve overloading operator kullanýlmadan 
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
//Karmasik sayilarla ilgili bir örnek

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
Not burada compiel time da olduðu için otomatikman gerçekleþir
Ancak calýþma zamanlý(Run Time) oluþturuluyorsa satýr 2 ve 3 te yapýlan iþlemleri 
copy constructer ve overloaded Assigment operator ile yapacaz;
*/
#endif