#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class Robo1
{
private:
	bool dvm;
	string soru;
public:
	Robo1()
	{ 
		cin>>soru;
		Tanimla(soru);
	}
	Robo1(string _soru)
	{
		soru=_soru;
		Tanimla(soru);
	}
	~Robo1()
	{
		soru="";
	}
	void Tanimla(string sr)
	{
		char tn[]="tanimlaniyor";
		if(sr=="asd")
		{
			for(int say=0;say<12;say++)
			{
			cout<<tn[say];
			Sleep(1 * 400);
			}
			for(int say=0;say<40;say++)
			{
				Sleep(1 * 190);
				cout<<".";
			}
			cout<<"\n";
			cout<<"ok\n";
		}
	}
	bool Devam()
	{
		bool k;
		cout<<"Devam etmek istemiyorsanýz 0 a basýn";
		cin>>k;
		return k;
	}
};//class Robo1



int main()
{
	bool i;
	//Robo1 ro;
	do
	{
		Robo1 ro;
		i=ro.Devam();
	}
	while(i==true);
}