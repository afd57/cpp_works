#include <iostream>
#include <cmath>
const double PI=3.14;

int main()
{
	double B=1,nu=1,sn,vek,radyan;
	int i=1,sonuc;
	double derece = 0.0;
	do
	{
		derece+=10.0;
		radyan = (3.141593/180.0) * derece; 
		vek=B*nu*sin(radyan);
		if(vek<0)
			sonuc=-1;
		else
			sonuc=1;
		std::cout<<vek<<"\t"<<derece<<"\t"<<sonuc<<std::endl;
		if(derece==360)
			derece=0;
	}
	while(i=1);
}