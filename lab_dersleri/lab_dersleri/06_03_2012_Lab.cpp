#include <iostream>
#if 1

void fonk(int j)
{
	int i=0;

}
int fonk2(int j)
{
	int i=0;
	j++;
	return j;
}
int main()
{
	int i,k;
	for(i=0;i<10;i++)
	{
		fonk(i);
		k=fonk2(i);
		std::cout<<k;
	}
}
#else
void fonk(void)
{
	//sadece it yazarsak fonksiyona her girdiðinde int e 0 deðeri atar buna dinamik deðiþken denir 
	// eðer static deðiþken olursa ilk baþta static int=0; 0 atar ondan sonra 
	static int i=0;
	i++;
	std::cout<<i;
}

int main()
{
	int i,j=1;
	for(i=0;i<10;i++)
	{
		fonk();
		//std::cout<<j++<<"kere cagirildi"<<std::endl;
	}

}


//______________________________________________________________________________________________________

inline void fonk(int *a)
{
	*a++;
}
int main()
{
	int i=0;
	for(i=0;i<200000000;i++)
		printf("%d\n",i);
		//fonk(&i);
	//if(i==200000000)
		//printf("bitti");
}
#endif

#if 2

//____________________________________________________________________________________
#else
int j=0,k=0;
void fonk(void)
{
	int i=0;
	j++;
	count<<j;

}
void fonk2(void)
{

}
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		fonk();
		fonk2();
	}
#endif