#include <iostream>

#if 1
inline void fonk(int *a)
{
	*a++;
}
int main()
{
	int i=0;
	for(i=0;i<200000000;i++)
	{
		fonk(&i);
	if(i==200000000)
		printf("bitti");
	}
}
#else
//Statik De�i�kenler ile ilgili �dev

using namespace std;
void gir(int a)
{
	// E�er bu �ekilde yazarsak her seferinde x 0 olur int x=0;
	//program�m�z hatal� �al���r ba��na static yazarsak ilk sefer 0 atar sonra atmaz
	static int x=0;
	x++;
	cout<<x<<"kere cagirildi"<<endl;
}
int main()
{
	int i=0;
	for(i=0;i<10;i++)
		gir(i);
}
#endif