#include <iostream>
//composition karýþým bu yapýya karýþým sýnýflar denebilir.
class Nokta
{
	int p1,p2;
public:
	Nokta(int _p1,int _p2):p1(_p1+_p2),p2(_p1-_p2)
	{
		
	}
};//class Nokta

class Cizgi
{
	Nokta P1,P2;
	double d;
public:
	Cizgi(int i1x,int i1y,int i2x,int i2y):P1(i1x,i1y),P2(i2x,i2y)
	{
	}
};//class Cizgi


int main()
{
	Cizgi d1(1,2,3,4);
}