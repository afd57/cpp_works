#include <iostream>
#include <string>
using namespace std;
template <class R,class S>


class Karmasik
{
	R gercek;
	S sanal;
public:
	Karmasik(R _gercek,S _sanal)
	{
		gercek=_gercek;
		sanal=_sanal;
	}
};//class Karmasik


int main()
{
	Karmasik <int,double> k(1,2); 
}