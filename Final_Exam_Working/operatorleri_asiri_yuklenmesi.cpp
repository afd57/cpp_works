#include <iostream>
using namespace std;

#if 1
class Karmasik
{
	int reel,sanal;
public:
	Karmasik(int _reel,int _sanal):reel(_reel),sanal(_sanal)
	{
	}
	friend istream & operator >> (istream & in,Karmasik &z);
	Karmasik operator  + (Karmasik &k)
	{
		int r1,s1;
		r1=k.reel+reel;
		s1=k.sanal+sanal;
		return Karmasik(r1,s1);
	}
	/*istream & operator >> (istream & in,Karmasik &z)
	{
	}
	*/
};//class Karmasik
#endif
istream & operator >> (istream &in , Karmasik &z)
{
}
int main()
{

}