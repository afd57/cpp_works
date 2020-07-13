#include <iostream>
using namespace std;
int k;


#if 1
int main()
{
	cout<<"aziz";
	k=1;
}
#endif

#if k
int main()
{
	cout<<"aziz";
}
#endif

#if k
int main()
{
	cout<<"aziz";
}
#endif