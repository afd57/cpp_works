#include <iostream>
#include <string>
#include <fstream>
using namespace std;
using std::ofstream;
using std::ifstream;


#if 0
class Ogrenci
{
	string isim;
	int no;
	double gno;
public:
	Ogrenci()
	{
	}
	friend istream &operator >> (istream &cin , Ogrenci &ogr)
	{
		cin>>ogr.isim>>ogr.no>>ogr.gno;
		return cin;
	}
	friend ofstream & operator << (ofstream &ofs , Ogrenci &ogr)
	{
		ofs<<ogr.isim<<"\t"<<ogr.no<<"\t"<<ogr.gno<<endl;
		return ofs;
	}
	friend ifstream & operator >> (ifstream &ifs , Ogrenci &ogr)
	{
		ifs>>ogr.isim>>ogr.no>>ogr.gno;
		return ifs;
	}
	void Yazdir()
	{
		cout<<isim<<"\t"<<no<<"\t"<<gno<<endl;
	}
};//class Ogrenci




int main()
{
	ofstream ofs("not.txt");
	Ogrenci ogr[3];
	//ifstream ifs("not.txt");
	for(int i=0;i<3;i++)
	{
		cin>>ogr[i];
		ofs<<ogr[i];
	}
	ofs.close();
	/*for(int i=0;i<3;i++)
	{
		ifs>>ogr[i];
		ogr[i].Yazdir();
	}*/
}


#endif




class Audi
{
	int seri;
public:
	Audi(int _seri):seri(_seri)
	{
	}
	virtual void Test()=0;
	virtual string Mesaj()=0;
	virtual int Test_Sonucu()=0;
	virtual int h_p()=0;
	int get_Seri()
	{
		return seri;
	}
	friend ofstream & operator << (ofstream &ofs , Audi &au)
	{
		ofs<<"Audi A"<<au.seri<<endl;
	}

};//class Audi

class A6:public Audi
{
	int test_sonucu;
	int hp;
	string mesaj;
public:
	A6(int _test_sonucu,int _hp,int _model):Audi(6),hp(_hp),test_sonucu(_test_sonucu)
	{
		mesaj="Audi A6 icin Yapilan Testler Sonucu";
	}
	void Test()
	{
		cout<<"Audi A6 icin Yapilan Testler Sonucu : "<<test_sonucu<<endl;
	}
	string Mesaj()
	{
		return mesaj;
	}
	int Test_Sonucu()
	{
		return test_sonucu;
	}
	int h_p()
	{
		return hp;
	}
	friend ofstream & operator << (ofstream &ofs , A6 &au)
	{
		ofs<<"Audi A"<<au.get_Seri()<<au.hp<<au.mesaj<<au.mesaj<<au.test_sonucu<<endl;
		return ofs;
	}
	friend istream & operator >> (istream &in , A6 &au)
	{
		//in>>A6.hp;
	}
};//class A6

class A7:public Audi
{
	int test_sonucu;
	int hp;
	string mesaj;
public:
	A7(int _test_sonucu,int _hp,int _model):Audi(7),hp(_hp),test_sonucu(_test_sonucu)
	{
		mesaj="Audi A7 icin Yapilan Testler Sonucu";
	}
	void Test()
	{
		cout<<"Audi A7 icin Yapilan Testler Sonucu : "<<test_sonucu<<endl;
	}
	friend ofstream & operator << (ofstream &ofs , A7 &au)
	{
		ofs<<"Audi A"<<au.get_Seri()<<au.hp<<au.mesaj<<au.mesaj<<au.test_sonucu<<endl;
		return ofs;
	}
	string Mesaj()
	{
		return mesaj;
	}
	int Test_Sonucu()
	{
		return test_sonucu;
	}
	int h_p()
	{
		return hp;
	}
};//class A7


class A8:public Audi
{
	int test_sonucu;
	int hp;
	string mesaj;
public:
	A8(int _test_sonucu,int _hp,int _model):Audi(8),hp(_hp),test_sonucu(_test_sonucu)
	{
	}
	void Test()
	{
		mesaj="Audi A8 icin Yapilan Testler Sonucu";
		cout<<"Audi A8 icin Yapilan Testler Sonucu : "<<test_sonucu<<endl;
	}
	friend ofstream & operator << (ofstream &ofs , A8 &au)
	{
		ofs<<"Audi A"<<au.get_Seri()<<au.hp<<au.mesaj<<au.mesaj<<au.test_sonucu<<endl;
		return ofs;
	}
	string Mesaj()
	{
		return mesaj;
	}
	int Test_Sonucu()
	{
		return test_sonucu;
	}
	int h_p()
	{
		return hp;
	}
	/*void get_ofs(A6 &a)
	{
		ofs<<a.hp;
	}*/
};//class A8

int main()
{
	ofstream ofs("Audi.txt");
	Audi *A[3];
	A[0]=new A6(4,200,6);
	A[1]=new A7(5,250,7);
	A[2]=new A8(6,300,8);
	for(int i=0;i<3;i++)
	{
		ofs<<"Audi A"<<A[i]->get_Seri()<<"\t"<<A[i]->h_p()<<" Beygir\t"<<A[i]->Mesaj()<<A[i]->Test_Sonucu()<<endl;
	}
	ofs.close();

}