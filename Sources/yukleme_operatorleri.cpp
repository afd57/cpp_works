#include <iostream>
using namespace std;
//karmasik say� s�n�f�n�n input output fonksiyonlar�n� tan�mlayacaz

class Karmasik
{
	double i,j;
public:
	friend Karmasik �mput();
	friend void output(const Karmasik �);
};//class karmasik
Karmasik �mput()
{
	Karmasik s1;
	cin>>s1.i>>s1.j;
	return s1;
}
void output(const Karmasik �)
{
	cout<<"gercek"<<�.i<<"sanal"<<�.j;
}
int main()
{
	Karmasik z1;
	z1=�mput();
	output(z1);
}