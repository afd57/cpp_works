#include <iostream>
using namespace std;
//karmasik sayý sýnýfýnýn input output fonksiyonlarýný tanýmlayacaz

class Karmasik
{
	double i,j;
public:
	friend Karmasik Ýmput();
	friend void output(const Karmasik Ý);
};//class karmasik
Karmasik Ýmput()
{
	Karmasik s1;
	cin>>s1.i>>s1.j;
	return s1;
}
void output(const Karmasik Ý)
{
	cout<<"gercek"<<Ý.i<<"sanal"<<Ý.j;
}
int main()
{
	Karmasik z1;
	z1=Ýmput();
	output(z1);
}