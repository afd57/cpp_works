#include <iostream>
using namespace std;
class TamSayiDizisi
{
	int boyut;
	int *eleman;
public:
	TamSayiDizisi(const int n):boyut(n)
	{
		eleman=new int[boyut];
	}
	~TamSayiDizisi()
	{
		for(int k=0;k<boyut;k++)
			cout<<eleman[k];
		delete []eleman;
		for(int k=0;k<boyut;k++)
			cout<<eleman[k];
	}
	void tusla()
	{
		for(int i=0;i<boyut;i++)
			cin>>eleman[i];
	}

};//class TamSayiDizisi

int main()
{
	int x;
	cin>>x;
	TamSayiDizisi a(x);
	a.tusla();

}