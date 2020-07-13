#include <iostream>
using namespace std;
int main()
{
	//referans değişken=takma ad
	int ad=100;
	int &takmaad=ad;
	cout<<takmaad<<endl;
	cout<<ad<<endl;
	takmaad=102;
}