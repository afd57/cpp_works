#include <iostream>
#include <string>
using namespace std;

#if 0 
template <class C>
C mx(C a,C b)
{
	if(a>b)
		return a;
	else 
		return b;
}
#endif

template <class A,class B>

class C
{
	A a;
	B b;
public:
	C(A _a , B _b); //eðer portatip ise
};//

template <typename A,typename B>
C<A,B>::C(A _a , B _b)
{
	a=_a;
	b=_b;
}
typedef C<int,double> CC;

int main()
{
	CC c(1,2);
}