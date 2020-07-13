#include <iostream>
#include <string>
using namespace std;

class TamSayi
{
	int boyut;
	int *eleman;
public:
	TamSayi(int _boyut)
	{
		boyut=_boyut;
		eleman=new int[boyut];
	}
	void Tusla()
	{
		for(int i=0;i<boyut;i++)
		{
			cin>>eleman[i];
		}
	}
	void Yazdir();
};//class TamSayi

void TamSayi::Yazdir()
{
	for(int i=0;i<boyut;i++)
	cout<<eleman[i]<<"\t";
}


int main()
{
	int a;
	cin>>a;
	TamSayi t1(a);
	t1.Tusla();
	t1.Yazdir();
	cin>>a;
}