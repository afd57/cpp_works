/*
quizden sonraki uzun uðraþlardan sonra 
sonunda saat 00:07 14.03.2012
*********************         
**				   **		
**		******     **
**		*	 *	   **                   
**		*	 *	   **
**		*	 *	   **
**		******     **
**                 **
*********************
**	  **
**	 **
**	**	
****		
***			
***			
****	
**	**	
**	 **
**	  **
*/
#include <iostream>
template <class tip>

void topla(tip *dizi1,tip *dizi2,tip *dizi3,tip boyut)
{
	int i,c[4];
	for(i=0;i<boyut;i++)
	{
		dizi3[i]=dizi1[i]+dizi2[i];
	}
	//return *c;
}
int main()
{
	int a[]={1,2,3,4},
		b[]={1,2,3,4},
		c[4];
		topla(a,b,c,4);
		std::cout<<c[0]<<c[1]<<c[2]<<c[3];

}