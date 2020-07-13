#include <iostream>
#if 1

template <class t>

void min (t *p,t q)
{
	t min=p[0];
	for(int i=0;i<q;i++)
	{
		if(min>p[i])
			min=p[i];
	}
	std::cout<<"en kucuk"<<' '<<min;
	//return min;

}
int main()
{
	int a[]={1,3,5,8};
	double b[]={1,3,5,6};
	float c[]={1,2,1,4};
	min(a,4);

}



/*
  /\
 /||\
  ||
  ||
  ||
  ||
  ||
  ||*/ //Yukarýda
//bir sürü deðiþken olduðundan dolayý hepsi için tek tek yapmak çok zor
// ve karýþýk bir iþ bu nedenden dolayý "template" leri kullanacaz

#else
//__________________________________int ÝÇÝN___________________________________________________________________
int find_max(int *d,int dim)
{
	int max=d[0];
	for(int i=0;i<dim;i++)
	{
		if(max<d[i])
			max=d[i];
	}
	return max;
}
//_________________________________float ÝÇÝN_______________________________________________________________
double find_max(double *d,int dim)
{
	double max=d[0];
	for(int i=0;i<dim;i++)
	{
		if(max<d[i])
			max=d[i];
	}
	return max;
}
//________________________________________fonksiyonlarýn sonu____________________________________________________________________
int main()
{
	int a[]={3,5,1,8};
	double f[]={3.18,5.12,1.15,8.123};
	std::cout<<"en buyuk"<<find_max(a,4)<<std::endl;
	std::cout<<"en buyuk"<<find_max(f,4)<<std::endl;

}
#endif