#include <iostream>
#include <string>
using namespace std;
#if 0
class Ogrenci
{
private:///gizli bölüm
	int no;//sýnýf içiden eriþilir
	string isim;
	double gno;
public:/// gizli deðilll
	Ogrenci(int a):no(a)
	{
	}
	~Ogrenci()
	{
		//boþ
	}
};//class Ogrenci




int main()
{
	Ogrenci o1(2);
}
#endif


class Ogrenci
{
	string isim;
	int num;
	double gno;
public:
	void Tanimla(string _isim,int _num,double _gno);
	void Yazdir()
	{
		cout<<isim<<num<<gno;
	}
};//class Ogrenci

void Ogrenci::Tanimla(string _isim,int _num,double _gno)
{
	isim=_isim;
	num=_num;
	gno=gno;
}


int main()
{
	Ogrenci o1;
	o1.Tanimla("ali",10,2.2);
	o1.Yazdir();
}