#include <iostream>
/*
Compile - Time 
_____________

derleme anýnda hafýzada yer ayýrýr static;//degiþmez
******************************************************************************
Run Time
________
Calisma anýnda hafýzada yer ayýrma 

c de dizileri kullanýrken int a[x]; x deðerini girmeden bir dizi oluþturamazdýk
simdi rum time sayesinde calisirken oraya deger atanabilecek...................

Run Time new operatoru ile luþturulur;
*/



int main()
{
	int *p,a;
	//p=102;
	std::cin>>a;
	p=new int(a);
	delete p;


}