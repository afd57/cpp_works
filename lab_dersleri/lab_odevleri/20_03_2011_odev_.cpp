#include <iostream>
#include <Windows.h>
using namespace std;
class alarm
{
	int saat,dakika;
public:
	alarm(int _saat,int _dakika)
	{
		int toplam,sn=60,k=0;
		saat=_saat;
		dakika=_dakika;
		toplam=saat*3600+dakika*60;
		for(int i=0;i < toplam;i++)
		{
			Sleep(1*1000);
			cout<<saat<<":"<<dakika<<":"<<sn<<endl;
			k++;
			sn--;
			if(k==60)
			{
				k=0;
				dakika--;
				sn=60;
			}
			if(dakika==0)
			{
				dakika=59;
				saat--;
			}
		}

	}
	~alarm()
	{
		cout<<"silindi";
	}
};//class alarm
//__________________________________________________________________________
int main()
{
	alarm a1(2,1);
}