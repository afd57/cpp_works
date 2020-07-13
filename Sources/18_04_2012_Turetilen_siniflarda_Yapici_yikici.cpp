/*
T�retilen s�n�flarda Consructor & Destructor fonksiyonlar

T�retilen s�n�flardan nesne olu�turuldu�u esnada zincirleme olarak yap�c� fonksionlar �a�r�l�r
zincirleme olarak yap�c� fonksiyonlar �a�r�l�r.
Bu olayda ya do�rudan tan�mlanm�� yada dolayl� olarak yap�c� fonksiyonlar derleyici taraf�ndan tan�mlanm��.
Bu olay do�rudan yada dolayl� olarak ger�ekle�ir 

Olu�turlan nesneler ayn� �ekilde zincirleme olarak yok olur;
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