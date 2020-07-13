#include <iostream>
//#include "27_03_2012_kutuphane.h"
using namespace std;
#if 1 //ders 1

//________________________________________________________________________________________
class Ekran_karti
{
public:
	int width,height,pxl_say;
	Ekran_karti() {};
	void CalcPxl()
	{
		pxl_say=height*width;
	}
};//class Ekran_karti
//________________________________________________________________________________________
class Islemci
{
	int tip,hiz;
public:
	Islemci() {};
};//class Islemci
//________________________________________________________________________________________

class laptop
{
	Islemci islemci;
	Ekran_karti ekran_karti;
public:
	laptop(int _height,int _width)
	{
		ekran_karti.height=_height;
		ekran_karti.width=_width;
		ekran_karti.CalcPxl();
	};
	void Display()
	{
		cout<<ekran_karti.pxl_say;
	};
};//class laptop
//________________________________________________________________________________________
int main()
{
	laptop lab(1920,1280);
}

#else
class laptop
{
public:
	int islemci,ekran_karti;
public:
	laptop(int _islemci,int _ekran_karti):islemci(_islemci),ekran_karti(_ekran_karti)
	{
		//islemci=_islemci;
		//ekran_karti=_ekran_karti;
	}
	void bastir()
	{
		cout<<"laptop islemci"<<islemci<<endl<<"ekran karti"<<ekran_karti;
	}
};//class laptop
//________________________________________________________________________________________

int main()
{
	laptop l1(1,1);

}
#endif
