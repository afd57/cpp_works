// c++ daki kalýtým biolojideki kalýtýmýn aynýsý
//örnekle görelim 

#include <iostream>
#include <string>
using namespace std;
class Calisan
{
protected:
	string isim;
	int yas;
	double maas;
public:
	Calisan()
	{
	}
};//class Calisan

class Mudur:public Calisan
{
protected:
	string mevki;
public:
	Mudur(string _isim,int _yas,double _maas,string _mevki)
	{
		isim=_isim;
		yas=_yas;
		_maas=maas;
		_mevki=mevki;
		yazdir();
	}
	void yazdir()
	{
		cout<<"Hosgeldiniz Sayin"<<isim<<"Bey\n";
		cout<<"Maas Bilgileriniz\t"<<maas<<endl;
	}

};//class Mudur
int main()
{
	Mudur m1("Aziz",20,10000,"CEO");
}	