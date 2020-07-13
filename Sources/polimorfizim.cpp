//çoklu kalýtým 
#include <iostream>
using namespace std;


class Windowns98
{
protected:
	int a;
public:
	Windowns98(int _a):a(_a)
	{
	}
	virtual void graph()
	{
		cout<<"Windowns 98\t"<<a<<endl;
	}
};//class Windowns98

/*
	WÝndowns xp windowsn 98 in üzerine kurulmuþ bir iþletim sistemidir
	windowns xp  98 in bütün özelliklerine sahiptir çünkü 98 den türetilmiþ bir sýnýftýr
	örnek xp de açtýðýmýz bir dosyayý 98 de açamayabiliriz
	fakat 98 de açtýðýmýzý xp de açarýz bu programlar geçmiþini bilir.
	Eðer böyle birþey olmasaydý word 2003 ile yazýlmýþ belgelere word 2007 tarafýndan açýlmayacaktý
	yada açýlmasý için en baþtan word 2003 ün yazýlmasý gerekecekti.
	bu da prtik bir iþ deðil bu polimorfizim ile hemen çözülebilecek bir problem...
	örnekte görelim...
*/
class WindownsXP:public Windowns98
{
protected:
	int b;
public:
	WindownsXP(int _b,int _a):b(_b),Windowns98(_a)
	{
	}
	void graph()
	{
		cout<<"Windowns XP\t"<<a<<"--"<<b<<endl;
	}
};//class WindownsXP:public Windowns98

class Windowns7:public WindownsXP
{
protected:
	int c;
public:
	Windowns7(int _c , int _b , int _a):c(_c),WindownsXP(_b,_a)
	{

	}
	void graph()
	{
		cout<<"Windowns 7\t"<<a<<"--"<<b<<"--"<<c<<endl;
	}
};//class Windowns7:public WindownsXP

void graph(Windowns98 *S)
{
	S->graph();
}


int main()
{
	Windowns98 s1(1);
	WindownsXP s2(2,1);
	Windowns7  s3(3,2,1);
	graph(&s1);
	graph(&s2);
	graph(&s3);
}