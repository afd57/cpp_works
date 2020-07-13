#include <iostream>
using namespace std;

class Karmasik 
{
	double ger,san;
public:
	friend istream & operator >> (istream & in,Karmasik &z);
	friend ostream & operator << (ostream & on,Karmasik &z);
	friend Karmasik & operator + (const Karmasik & diger);
};//class Karmasik 

Karmasik & operator + (const Karmasik & diger)
{

}

istream & operator >> (istream & in,Karmasik &z)
{
	in>>z.ger>>z.san;
	return in;
}

ostream & operator << (ostream & out,Karmasik &z)
{
	out<<z.ger<<'///'<<z.ger;
	return out;
}
int main()
{
	Karmasik a;
	cout<<"karmasik sayi gir";
	cin>>a;
	cout<<"z="<<a<<endl;
}