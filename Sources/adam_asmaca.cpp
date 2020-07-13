#include <iostream>
#include <string>
#include "clear_screen.h"

using namespace std;
class Oyun
{
	string kelime;
public:
    Oyun()
	{
		cin>>kelime;
		clear_screen();
		cout<< kelime.size() <<" harfli bir kelime"<<endl;
		int kelime_size=kelime.size();
		control(kelime_size);
	}
	void control(int kelime_size)
	{
		char *kelimetut;
		char *girilen_harf;
		girilen_harf=new char [kelime_size];
		kelimetut=new char[kelime_size];
		for(int j=0 ; j<kelime.size() ; j++)
		{
			kelimetut[j]='?';
		}
		for(int i=0 ; i < 6 ; i++)
		{
			//int *k;/*=kelime.size();
			//new char kelimetut[k];*/
			//k=new int [kelime.size()];
			char girilen;
			cin>>girilen;
			int say=0;
			girilen_harf[i]=girilen;
			//clear_screen_l2(2);
			//if(i>1)
			//cout<<girilen_harf[i];
			for(int _i=0 ; _i < kelime_size ; _i++)
			{
				if(girilen == kelime[_i])
				{
					kelimetut[_i] = girilen ;
				}
				cout<<kelimetut[_i];
				if(_i+1==kelime_size)
					cout<<endl;
			}
			
		}
	}
};//class Oyun


int main()
{
	Oyun o1;
	gets(0);
	cout<<"asdasdasdasdasdas";
}