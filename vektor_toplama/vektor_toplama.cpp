// 15_03_2012 calisma dosyasinda calismayan program 

#include <iostream>
#include <string>
using namespace std;

class vektor
{
private:
	int x1,y1,z1,
		x2,y2,z2,
		tx,ty,tz;
public:
	void tanimla(const int vx1,const int vy1,const int vz1,
				 const int vx2,const int vy2,const int vz2);
	void topla();
	void yazdir();

};//class sonu 

//*****************************************************************************************

//______________________________Tanimla fonksiyonu_________________________________________
//NOT!!!!
// Eðer bu fonksiyondaki deðerleri classýn içindeki deðere atamak istiyorsanýz 
// ::(çözümleme operatorunu kullanmamýz gerekmektedir)
// syntax ** void vektor::tanimla(const int v1,const int v2,const int v3) **
void vektor::tanimla(const int v1x,const int v1y,const int v1z,
	                 const int v2x,const int v2y,const int v2z)
{

	x1=v1x;
	y1=v1y;
	z1=v1z;
	x2=v2x;
	y2=v2y;
	z2=v2z;

}
//____________________________tanimla fonksiyonu sonu_______________________________________

//****************************************************************************************
//__________________________________Yazdir Fonksiyonu_______________________________________

void vektor::yazdir()
{
	cout<<x1+x2<<','<<y1+y2<<','<<z1+z2;
}

//______________________________Yazdir Fonksiyonu Sonu______________________________________

//**************************************************************************************

//______________________________topla fonksiyonu____________________________________________
void vektor::topla()
{
	x1+x2;
	y1+y2;
	z1+z2;
}

//________________________________topla fonksiyonu__________________________________________
//******************************************************************************************

int main()
{
	vektor vkt;
	vkt.tanimla(1,2,3,1,2,3);
	//vkt.topla();
	vkt.yazdir();

}