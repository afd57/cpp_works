#include <iostream>
template <class T>

void swap (T &p,T &q)
{
	T t=p;
	p=q;
	q=t;
}

int main()
{
	int a=1,b=2;
	swap(a,b);
}