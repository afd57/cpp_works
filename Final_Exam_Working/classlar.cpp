#include <iostream>
#include <string>
using namespace std;
#if 0
class Ogrenci
{
private:///gizli b�l�m
	int no;//s�n�f i�iden eri�ilir
	string isim;
	double gno;
public:/// gizli de�illl
	Ogrenci(int a):no(a)
	{
	}
	~Ogrenci()
	{
		//bo�
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