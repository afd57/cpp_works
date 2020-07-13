#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using std::ofstream;

class Okul
{
	string tip;
public:
	Okul(string _tip):tip(_tip)
	{
	}
};//class Okul
class Ogrenci:public Okul
{
	string ad;
	double puan;
	int no;
public:
	Ogrenci(string _ad, int _no, double _puan):ad(_ad),puan(_puan),no(_no),Okul("Ogrenci")
	{
	}
	Ogrenci():Okul("Ogrenci")
	{
	};
	friend ofstream & operator << (ofstream &ofs , Ogrenci &og)
	{
		ofs<<og.no<<og.ad<<og.puan;
		return ofs;
	}
	friend ifstream & operator >> (ifstream &ifs , Ogrenci &og)
	{
		ifs>>og.no>>og.ad>>og.puan;
		return ifs;
	}
	friend istream & operator >> (istream &in , Ogrenci &ogr)
	{
		in>>ogr.no>>ogr.ad>>ogr.puan;
		return in;
	}
	string getad()
	{
		return ad;
	}
	int getno()
	{
		return no;
	}
	double getpuan()
	{
		return puan;
	}
	void  Yazdir()
	{
		cout<<ad<<endl;
	}
};//class Ogrenci

int main()
{
	Ogrenci ogr[3];
	int osayi;
	//ofstream ofs("puan.txt");
	//ifstream ifs("puan.txt");
	cin>>osayi;
	for(int i=0;i<osayi;i++)
	{
		cin>>ogr[i];
		ogr[i].Yazdir();
		//ofs<<ogr.getno()<<"\t"<<ogr.getad()<<"\t"<<ogr.getpuan()<<endl;
		//ofs<<ogr;
	}
	//ofs.close();
	/*int i=0;
	while(i==0)
	{
		ifs>>ogr;

	}*/
}

#if 0
int main()
{
	ofstream ofs("Yaz.txt");
	ofs<<"aziz";
	ofs.close();
}
#endif