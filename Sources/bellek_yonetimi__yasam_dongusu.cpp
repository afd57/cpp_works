#include <iostream>
/*
Compile - Time 
_____________

derleme an�nda haf�zada yer ay�r�r static;//degi�mez
******************************************************************************
Run Time
________
Calisma an�nda haf�zada yer ay�rma 

c de dizileri kullan�rken int a[x]; x de�erini girmeden bir dizi olu�turamazd�k
simdi rum time sayesinde calisirken oraya deger atanabilecek...................

Run Time new operatoru ile lu�turulur;
*/



int main()
{
	int *p,a;
	//p=102;
	std::cin>>a;
	p=new int(a);
	delete p;


}