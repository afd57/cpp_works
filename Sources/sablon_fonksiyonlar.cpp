// Bilgisayar biliminde -swap -search -sort -insert gibi bir �ok i�lem hert�r veri tipi i�in
// ayn� program mant���na sahiptir sablon fonksiyon tan�mlama y�ntemi 
// ile sablon c++ derleyici otomatik olarak fonksiyon �a�r�ld��� veri tipine ba�l� olarak 
// fonksiyon �retir
//SABLON fomksiyonu nas�l tan�mlanacak???

#include <iostream>

template <class T�P>

void swap (T�P &p,T�P &q)
{
	T�P t=p;
	p=q;
	q=t;
}

struct Z 
{
	double re,im;
};

int main()
{
	char a='x',
		 b='y';
	swap(a,b);
	int m=50,
		n=100;
	swap(m,n);
	double c=9.92,
		   d=8.23;
	swap(c,d);
	

}












