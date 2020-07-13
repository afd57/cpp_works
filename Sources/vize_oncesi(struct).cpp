#include <iostream>
#include <string>
using namespace std;
const int IDM=128;
//struct 
#if 1
#else
{
	string isim;
	int no;
	string bolum;
	double gno;
};

int main()
{
	ogrenci a;
	a.no=11111;
	a.isim="aziz";
	a.gno=3.12;
}
#endif

struct P
{
	int x,y,z;
};

struct P noktayap(int x,int y,int z)
{
	P p1;
	p1.x=3*x;
	p1.y=3*y;
	p1.z=3*z;
	return p1;
}

int main()
{
	P p1;
	p1=noktayap(1,2,3);
}

