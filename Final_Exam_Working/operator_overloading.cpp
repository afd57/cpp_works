/// operatorlarin asiri yüklenmesi


#include <iostream>
#include <string>
using namespace std;


class Karmasik
{
	int reel , sanal;
public:
	Karmasik(int _reel,int _sanal)
	{
		reel=_reel;
		sanal=_sanal;
	}
	Karmasik operator << (Karmasik &k)
	{
		int tr,ts;
		tr=k.reel+reel;
		ts=k.sanal+sanal;
		return Karmasik(tr,ts);
	}
};//class Karmasik


int main()
{
	Karmasik k1(1,2),k2(3,4);
	k1<<k2;
}
