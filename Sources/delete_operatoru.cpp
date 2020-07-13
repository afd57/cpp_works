#include <iostream>

int main()
{
	int *p=new int(102);
	double *q=new double(3.14);
	delete p;
	delete q;
}