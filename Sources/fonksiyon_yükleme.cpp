/* 
C++ ile ayn� fonksiyon ismiyle farkl� tip ve farkl� say�da parametre sahibi fonk
tan�mlayabilirz buna fonksiyon y�kleme  denir
*/
//�rnek
/*
	|___|
	|___|
	|___|
	|___|
	|___|
\___________/
 \_________/
  \	�rnek /
   \_____/
    \___/
	 \_/
*/
	   
#include <iostream>
using namespace std;
//___________________________________________________________________________________________________
double topla(const double x,const double y)
{
	cout<<"const double";
	return x+y;
}
//___________________________________________________________________________________________________
double topla(double a[],int x)
{
	cout<<"double[],int x";
		return a[1]+x;
}
//______________________________________________________________________________________________________
int topla(int x,int y)
{
	cout<<"int x,int y";
	return x+y;
}
//_______________________________________________________________________________________________
char topla(char x,char y)
{
	//swap fonksiyonunun yapt� g�revi yapar
	char p;
	p=x;
	y=x;
	p=y;
	return x,y;
}
int main()
{
	double a[2]={1,2};
	topla(1,2);
	topla('a','b');
	topla(1.30,1.4);
	topla(a,2);
}
