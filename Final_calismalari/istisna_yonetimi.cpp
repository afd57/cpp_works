#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

#if 0
class Sifirabolme
{
public:
	Sifirabolme(char *msj)
	{
		cerr<<"Hata"<<msj<<endl;
	}
};//class Sifirabolme

int main()
{
	double pay=0,payda=0;
	try
	{
		cout<<"pay&payda giriniz";
		//cin>>pay>>payda;
		if(payda==0)
		{
			throw Sifirabolme("sifira bolme");
		}
		cout<<pay/payda;
	}
	catch (Sifirabolme &ist)
	{
	}
}
#endif
#if 0
class Istisna
{
	char *msj;
public:
	Istisna(char *m):msj(m)
	{
	}
	void Yazdir()
	{
		cerr<<msj<<endl;
	}
};//class Istisna

void Buffera_Yukle(int *buf,const int n,int deger)
{
	static int mevcut=0;
	if(mevcut>=n) throw Istisna("BUFFER DOLU AGA");
	buf[mevcut]=deger;
	mevcut++;
}

int main()
{
	const int boyut=2;
	int buffer[boyut];
	try
	{
		Buffera_Yukle(buffer,boyut,102);
		Buffera_Yukle(buffer,boyut,587);
		Buffera_Yukle(buffer,boyut,732);
	}
	catch (Istisna &ist)
	{
		ist.Yazdir();
		for(int i=0;i<10;i++)
		Beep(600,500);
		exit;
	}
}
#endif
#if 0
class Mathistisna
{
public:
	virtual void Yazdir()=0; //saf sanal fonksiyon
};//class Mathistisna

class Overflow:public Mathistisna
{
	void Yazdir()
	{
		cerr<<"Hata!! Boyut Asimi";
	}
};//class Overflow:public Mathistisna

class SifiraBolme:public Mathistisna
{
public:
	void Yazdir()
	{
		cerr<<"Hata!! Sifira bolme \n";
	}
};//class SifiraBolme:public Mathistisna


int Topla(int x,int y)
{
	if(x>0 && y>0 && x>MAXINT-y)throw Overflow();
	return x+y;
}

int Bolme(int x,int y)
{
	if(y==0)throw SifiraBolme();
	return x/y;

}

int main()
{
	int p=1,q=2;
	try
	{
		cout<<Topla(p,q)<<endl;
		cout<<Bolme(p,0)<<endl;
	}
	catch(Mathistisna &ist)
	{
		ist.Yazdir();
	}
}
#endif