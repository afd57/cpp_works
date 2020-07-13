#include <iostream>

using namespace std;

class alarm
{
	int saat,dak;
	static int cntr;//cntr=0 kabul etmez classın dışında
	int cntr2;
public:
	alarm(int _saat,int _dak)
	{
		saat=_saat;
		dak=_dak;
		cntr++;
		cntr2++;
		cout<<saat;
	}

    ~alarm()
	{
		cout<<saat;
	}
	static int Cntr();
};

int alarm::Cntr()
{
	return cntr;
}

int alarm::cntr=0;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		alarm a1(5,10);
	for(int i=0;i<n;i++)
		alarm a2(5,10);
	cout<<"\n fonksiyon cagirma sayisi"<<alarm::Cntr();
}