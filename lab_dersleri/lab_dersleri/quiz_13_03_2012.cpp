/* Quiz sonucu 75


||||||||  |||||||||
	  ||  |||
	 ||   |||
    ||    |||||||||
    ||           ||
    ||           ||
    ||    |||||||||
	 

	 /\
	/  \ 
   /|  |\
	|  |
	|  |
	|  |
	|__|
*/
#include <iostream>
template <class tip>

int topla(tip *a,tip *b,tip idm)
{
		return a[idm]+b[idm];
}

int main()
{

	int a[]={1,2,3,4},
		b[]={2,3,4,5},i,c[4];
	for(i=0;i<4;i++)
	{
		c[i]=topla(a,b,i);
	}
	std::cout<<c[0]<<c[1]<<c[2]<<c[3];

}