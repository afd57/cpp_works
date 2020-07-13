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
//Statik Deðiþkenler ile ilgili Ödev

using namespace std;
void gir(int a)
{
	// Eðer bu þekilde yazarsak her seferinde x 0 olur int x=0;
	//programýmýz hatalý çalýþýr baþýna static yazarsak ilk sefer 0 atar sonra atmaz
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