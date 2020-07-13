//�oklu kal�t�m 
#include <iostream>
using namespace std;


class Windowns98
{
protected:
	int a;
public:
	Windowns98(int _a):a(_a)
	{
	}
	virtual void graph()
	{
		cout<<"Windowns 98\t"<<a<<endl;
	}
};//class Windowns98

/*
	W�ndowns xp windowsn 98 in �zerine kurulmu� bir i�letim sistemidir
	windowns xp  98 in b�t�n �zelliklerine sahiptir ��nk� 98 den t�retilmi� bir s�n�ft�r
	�rnek xp de a�t���m�z bir dosyay� 98 de a�amayabiliriz
	fakat 98 de a�t���m�z� xp de a�ar�z bu programlar ge�mi�ini bilir.
	E�er b�yle bir�ey olmasayd� word 2003 ile yaz�lm�� belgelere word 2007 taraf�ndan a��lmayacakt�
	yada a��lmas� i�in en ba�tan word 2003 �n yaz�lmas� gerekecekti.
	bu da prtik bir i� de�il bu polimorfizim ile hemen ��z�lebilecek bir problem...
	�rnekte g�relim...
*/
class WindownsXP:public Windowns98
{
protected:
	int b;
public:
	WindownsXP(int _b,int _a):b(_b),Windowns98(_a)
	{
	}
	void graph()
	{
		cout<<"Windowns XP\t"<<a<<"--"<<b<<endl;
	}
};//class WindownsXP:public Windowns98

class Windowns7:public WindownsXP
{
protected:
	int c;
public:
	Windowns7(int _c , int _b , int _a):c(_c),WindownsXP(_b,_a)
	{

	}
	void graph()
	{
		cout<<"Windowns 7\t"<<a<<"--"<<b<<"--"<<c<<endl;
	}
};//class Windowns7:public WindownsXP

void graph(Windowns98 *S)
{
	S->graph();
}


int main()
{
	Windowns98 s1(1);
	WindownsXP s2(2,1);
	Windowns7  s3(3,2,1);
	graph(&s1);
	graph(&s2);
	graph(&s3);
}