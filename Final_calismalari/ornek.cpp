#include <iostream>
#include <string>
using namespace std;


template <typename G,typename S>

class Karmasik
{
	G gercel;
	S sanal;
public:
	Karmasik(G _gercel,S _sanal)
	{
		gercel=_gercel;
		sanal=_sanal;
	}
	void Yazdir()
	{
		cout<<gercel<<"+"<<sanal<<endl;
	}
	Karmasik <G,S> & operator *(Karmasik <G,S> &a) 
	{
		G g;
		g=this->sanal*a.gercel - this->sanal*a.sanal;
		S s;
		s=this->sanal*a.gercel + this->sanal*a.sanal;
		this->gercel=g;
		this->sanal=s;
		return *this;
	}
};//class Karmasik

int main()
{
	Karmasik <int,double> Z(1,3.1);
}