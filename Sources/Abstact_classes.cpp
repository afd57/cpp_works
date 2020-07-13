#include <iostream>
#include <string>
using namespace std;
const double pi=3.14;
class Sekil
{
	string sekiladi;
public:
	Sekil(string _sekiladi):sekiladi(_sekiladi)
	{
		//atadı
	}
	Sekil()
	{
	}
	virtual double alan()=0;
	string getad()
	{
		return sekiladi;
	}
};
class Ucgen:public Sekil
{
	double taban,yukseklik;
public:
	Ucgen(string _sekiladi,double _taban,double _yukseklik):taban(_taban),yukseklik(_yukseklik),Sekil(_sekiladi)
	{
	}
	double alan()
	{
		return taban*yukseklik/2;
	}
};
class Dikdortgen:public Sekil
{
	double kenar1,kenar2;
public:
	Dikdortgen(string _isim,double k1,double k2):kenar1(k1),kenar2(k2),Sekil(_isim)
	{
	}
	double alan()
	{
		return kenar1*kenar2;
	}
};
class Daire:public Sekil
{
	double yaricap;
public:
	Daire(string _isim,double _yaricap):yaricap(_yaricap),Sekil(_isim)
	{
	}
	double alan()
	{
		return (pi)*(yaricap*yaricap);
	}

};


int main()
{
	Sekil *S[3];
	S[0]=new Ucgen("ucgen",5,10);
	S[1]=new Dikdortgen("dikdortgen",5,10);
	S[2]=new Daire("daire",10);

	for(int i=0;i<3;i++)
	{
		// runtime da olduğu zaman S[i].alan() olmaz S[i]->alan()  olur
		cout<<S[i]->getad()<<"\t"<<S[i]->alan()<<endl;
	}
}