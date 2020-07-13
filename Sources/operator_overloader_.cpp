//bununla ilgili bir çok source olabilir sadece calýþma amaçlýdýr ders 
// içerikleri yoktur tamamen bana ait

#include <iostream>
using namespace std;

class Ters
{
	int s1,s2;
public:
	Ters(int _s1,int _s2):s1(_s1),s2(_s2)
	{
	}
	Ters operator +(const Ters &t)
	{
		int t1,t2;
		t1=s1+t.s1;
		t2=s2+t.s2;
		return Ters(t1,t2);
	}
};//class ters


int main()
{
	Ters _t(5,1),_t2(6,2);
	_t+_t2+_t;
}