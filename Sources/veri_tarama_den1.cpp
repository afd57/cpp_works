//not defteri vs gibi dosyalarda crtl+f ile yaptýðýmýz
// arama programý

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;
using std::ifstream;
using std::ofstream;



int main()
{
	int k=0,sayi,kac=100,isayi;
#if 0
	ofstream ofs("deneme.txt");
	srand(time(0));
	for(int i=0;i<100;i++)
	{
		sayi=rand()%90;
		ofs<<sayi<<endl;
	}
	ofs.close();
#endif
#if 1  //arama
	ifstream ifs("deneme.txt");
	for(int i=0;i=100;i++)
	{
	ifs>>isayi;
	if(isayi==67)
	{
		k++;
		cout<<k<<endl;
	}
	}
	k;
#endif
}