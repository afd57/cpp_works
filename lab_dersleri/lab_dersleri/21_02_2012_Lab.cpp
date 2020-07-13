#include <iostream>
const float PI=3.14160;
#if 1

float cevre(int r)
{
	return 2*PI*r;
}
float alan(int r)
{
	return PI*r*r;
}
int main()
{
	int r;
	std::cin >> r;
	std::cout << cevre(r)<< std::endl << alan(r);
}

#else
//ders 1
bool asalmi(int x)
{
	bool r=true;
	for(int i=2;i<x;i++)
		if(x%i==0)
		{
			r=false;
			break;
		}
	return r;
}

int main()
{
	int n;
	std:: cout<<"sayi gir";
	std:: cin>>n;
	std:: cout<<"asal mi"<<asalmi(n);
	//using namespace
return 0;
#endif