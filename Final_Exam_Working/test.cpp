#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Error
{
public:
	Error(char *msj)
	{
		cout<<msj<<"hatasi";
	}
};//class Error

class Hayvan 
{
	static int hayvan_sayisi;
	string cins;
public:
	Hayvan(string _cins):cins(_cins)
	{
		hayvan_sayisi++;
	}
	virtual void bagýr(int a)=0;
	virtual void uret()=0;
};//class Hayvan 
int Hayvan::hayvan_sayisi=0;

class Koyun:public Hayvan
{
	int yun;
public:
	Koyun():Hayvan("koyun")
	{
		yun=rand()%5;
	}
	void bagir(int a)
	{
		cout<<"moooooo";
	}
	void uret()
	{
		cout<<yun<<"kg yun uretir";
	}
};//class Koyun:public Hayvan

class Tavuk:public Hayvan
{
	int yumurta;
public:
	Tavuk():Hayvan("Tavuk")
	{
		yumurta=rand()%200;
	}
	void bagir(int a)
	{
		cout<<"tavukkkkkkkkkkkk";
	}
	void uret()
	{
		cout<<yumurta<<"tane"<<"yurmuta uretir";
	}
};//class Tavuk:public Hayvan

int main()
{
	int k_s,t_s;
	Hayvan *H1[10];
	try
	{
		cout<<"KOyun Sayýsý Ve Tavuk Sayýsýný Girin";
		cin>>k_s>>t_s;
		if(k_s+t_s>10)throw Error("ciftlik doli\n");
		for(int i=0;i<10;i++)
		{
			if(i<k_s);
			H1[i]=new Tavuk();
		}
	}
	catch (Error &er)
	{
	}
}