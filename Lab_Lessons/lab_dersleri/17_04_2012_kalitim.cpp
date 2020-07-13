#include <iostream>
#include <string>
using namespace std;
class Madde
{
protected:
	int kutle,hacim;
};//class Madde

class Canli: public Madde
{
protected://hem private hem public gibi davranır
	     // ama gizlilik korunur.....
	int yas;
	string ad;
};//class Canli

//***********************************************************************************

class Hayvan:public Canli // yazdigimiz anda class Canlidaki int yas; ve string ad; class Hayvan a kullanır
	                     //buna kalıtım denir amelelikten kurtarır
{
protected:
	string besin;
public:
	Hayvan(){};
	Hayvan(int _yas , string _ad,int _kutle)
	{
		yas=_yas;
		ad=_ad;
		kutle=_kutle;
		//cout<<yas<<"\t"<<ad<<"\t"<<kutle;
		}
};//class Hayvan

class Omurgali:public Hayvan
{
protected:
	int omur_sayısı,kemik_sayısı;
public:
	Omurgali(int _yas,string _ad,int _kutle,int _hacim)
	{
		yas=_yas;
		ad=_ad;
		kutle=_kutle;
		hacim=_hacim;
		cout<<yas<<"\t"<<ad<<"\t"<<kutle<<"\t"<<hacim;
	}
	
};//class Omurgali

int main()
{
	Omurgali o1(20,"Azz",60,70);
}