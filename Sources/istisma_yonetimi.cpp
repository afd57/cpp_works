//16.05.2012 dersi
/*
Exception �stisna (Error hata)

2 �e�it hata vard�r

1) Derleme(compiel) zamanl� hata (her zaman kar��la�t���m�z)  istisna olmayan
2) Calima zamanl�(run time) istisna hatalar

�stisna yonetimini ihmal etmek telafisi m�mk�n olmayan hasarlara neden olabilir.
C++ da istisna yonetimi
1. asamada istisna tespiti yap�l�r muhtemel istisnalar� tespit 
edilmesine yonelik cabalr�n yap�laca�� mekan.
2. istisna f�rlat�lmas� belirlenmesi
3. istisnalar�n yakalanmas� �istisna durumla kar��la��ld���nda ne t�r ad�mlar
at�laca�� ve nas�l kar��l�k  verilece�i belirlenir
Orn Sistemi kapat , uyar� ver vs.......

syntax for exception handling  
try
{
	Tespit isleminin yap�laca�� mekan yurutulecek kaynak kodu..
}
catch()
{
	istisnai durumlda yap�lacak ad�mlar...
}


ornek
*/


#include <iostream>
using namespace std;
#include <climits>

#if 1 //coklubi�imlilik & istisna yonetimi
class Mathistisna
{
public:
	virtual void qester() const=0;
};//class Mathistisna

class Overflow:public Mathistisna
{
public:
	void yazdir() const
	{
		cerr<<"hata ! boyut asimi !";
	}
};//class Overflow:public Mathistisna

class SifiraBol:public Mathistisna
{
public:
	void yazdir() const
	{
		cerr<<"hata ! sifira bolme";
	}
};//class SifiraBol:public Mathistisna

int topla (int x,int y)
{
	//if(x > 0 && y > 0 && x > MAX_INT_Y)
}


int main()
{

}
#endif

#if 0
//Fonksiyon i�inde istisna f�rlatmas�
/*
buffer overflow :dizi depolamaya yarayan haf�za birimi
buffer overflow : alaca�� miktardan fazla veri depolamaya cal���ld���nda ortaya c�kar
*/
class Istisna
{
	char *msj;
	int deger;
public:
	Istisna(int _deger,char *_msj):msj(_msj),deger(_deger)
	{
	}
	void yazdir() const
	{
		cerr << msj <<deger<<"  yazilamadi"<< endl;

	}
};//class Istisna
void bufferayukle(int *buf,const int n, int deger)
{
	static int mevcut=0;
	if(mevcut>=n)
	{
		throw Istisna(deger,"Buffer Dolu");
	} 
	buf[mevcut]=deger;
	mevcut++;
}


int main()
{
	const int boyut=2;
	int buffer[boyut];
	try
	{
		bufferayukle(buffer,boyut,102);
		bufferayukle(buffer,boyut,587);
		bufferayukle(buffer,boyut,315);
	}
	catch (Istisna &ist)
	{
		ist.yazdir();
	}
}
#endif
#if 0
class Sifirabol
{
public:
	Sifirabol(char *msj)
	{
		cerr << " hata : " << msj << endl;
		//cerr cout la ayn� i�lemi yapar hata mesajlar�n� vermede kullan�l�r
		//profesiyonal programc�lar kullan�r..
	}
};//class Sifirabol

int main()
{
	int i=1;
	do
	{
	double pay,payda;
	try
	{
		cout<<"pay paydayi gir:";
		cin>>pay>>payda;
		if(payda==0) 
			throw Sifirabol("Error");
		cout<<pay/payda;
	}
	catch(Sifirabol &is)
	{
	}
	}
	while(i=1);
}//int main
#endif