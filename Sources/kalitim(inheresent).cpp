#include <iostream>
#include <string>
static int k=10;
using namespace std;
class uye
{
	string id,pas;
	string uye_liste[3];
public:
	uye()
	{
	}
	uye(string _id,string _pas):id(_id),pas(_pas)
	{
		
		if(control()==0)
		{
			cout<<"�ye olmak istermisin evet 1 hay�r 0";
			int cevap;
			cin>>cevap;
			if(cevap==0)
			{
				cout<<"sayg� duyuyorum";
			}
			else
			{
				cout<<"uye ediliyorsunuz";
			}

		}
		
	}
	bool control()
	{
		return 0;
	}
};//class uye

class yeni_uye:public uye
{
	int a;
public:
	yeni_uye(int _a)
	{
	}
};//class yeni_uye


int main()
{
	uye u1("asd","asdfg");
}