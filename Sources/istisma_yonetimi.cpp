//16.05.2012 dersi
/*
Exception Ýstisna (Error hata)

2 çeþit hata vardýr

1) Derleme(compiel) zamanlý hata (her zaman karþýlaþtýðýmýz)  istisna olmayan
2) Calima zamanlý(run time) istisna hatalar

Ýstisna yonetimini ihmal etmek telafisi mümkün olmayan hasarlara neden olabilir.
C++ da istisna yonetimi
1. asamada istisna tespiti yapýlýr muhtemel istisnalarý tespit 
edilmesine yonelik cabalrýn yapýlacaðý mekan.
2. istisna fýrlatýlmasý belirlenmesi
3. istisnalarýn yakalanmasý þistisna durumla karþýlaþýldýðýnda ne tür adýmlar
atýlacaðý ve nasýl karþýlýk  verileceði belirlenir
Orn Sistemi kapat , uyarý ver vs.......

syntax for exception handling  
try
{
	Tespit isleminin yapýlacaðý mekan yurutulecek kaynak kodu..
}
catch()
{
	istisnai durumlda yapýlacak adýmlar...
}


ornek
*/


#include <iostream>
using namespace std;
#include <climits>

#if 1 //coklubiçimlilik & istisna yonetimi
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
//Fonksiyon içinde istisna fýrlatmasý
/*
buffer overflow :dizi depolamaya yarayan hafýza birimi
buffer overflow : alacaðý miktardan fazla veri depolamaya calýþýldýðýnda ortaya cýkar
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
		//cerr cout la ayný iþlemi yapar hata mesajlarýný vermede kullanýlýr
		//profesiyonal programcýlar kullanýr..
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