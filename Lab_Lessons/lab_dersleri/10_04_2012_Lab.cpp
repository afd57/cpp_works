#include <iostream>
using namespace std;

class Karmasik
{
	double re,im;
public:
	Karmasik(double re_new=0,double im_new=0):re(re_new),im(re_new)
	{};
	Karmasik operator + (const Karmasik &)const;
	void operator() () const;
};//class Karmasik

//+ operator

Karmasik Karmasik::operator+(const Karmasik &c) const
{
	double re_gecici,im_gecici;
	re_gecici=re+c.re;
	im_gecici=im+c.im;
	return Karmasik(re_gecici,im_gecici);
}

//operator ()
//ekrana sayilari yaz

void Karmasik::operator () () const
{
	cout<<"karmasik sayi"<<re<<","<<im<<endl;
}

//int main

int main()
{
	Karmasik z1(1,1),z2(2,2),z3;
	z1();
	z2();
	z3=z1+z2;
	z3();
	cout<<endl;
	system("PAUSE");
	return 0;
}
