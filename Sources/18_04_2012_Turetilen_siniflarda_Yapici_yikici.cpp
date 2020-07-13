/*
Türetilen sýnýflarda Consructor & Destructor fonksiyonlar

Türetilen sýnýflardan nesne oluþturulduðu esnada zincirleme olarak yapýcý fonksionlar çaðrýlýr
zincirleme olarak yapýcý fonksiyonlar çaðrýlýr.
Bu olayda ya doðrudan tanýmlanmýþ yada dolaylý olarak yapýcý fonksiyonlar derleyici tarafýndan tanýmlanmýþ.
Bu olay doðrudan yada dolaylý olarak gerçekleþir 

Oluþturlan nesneler ayný þekilde zincirleme olarak yok olur;
*/
#include <iostream>
using namespace std;

class Temel
{
protected:
	double *tem;
public:
	Temel(double te)
	{
		tem=new double;
		*tem=te;
		cout<<"Temel "<<*tem<<endl;
	}
	~Temel()
	{
		cout<<"~Temel"<<*tem<<endl;
		delete tem;
	}

};//class Temel

class Turetilen:public Temel
{
	char *tur;
public:
	Turetilen(char c,double d):Temel(d)
	{
		tur=new char(c);
		cout<<"Turetilen"<<*tur<<*tem<<endl;
	}
	~Turetilen()
	{
		cout<<"~Turetilen"<<*tur<<endl;
		delete tur;
	}
};//class Turetilen:public Temel

int main()
{
	Turetilen T('A',5);
}