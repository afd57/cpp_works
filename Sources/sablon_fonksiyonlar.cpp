// Bilgisayar biliminde -swap -search -sort -insert gibi bir çok iþlem hertür veri tipi için
// ayný program mantýðýna sahiptir sablon fonksiyon tanýmlama yöntemi 
// ile sablon c++ derleyici otomatik olarak fonksiyon çaðrýldýðý veri tipine baðlý olarak 
// fonksiyon üretir
//SABLON fomksiyonu nasýl tanýmlanacak???

#include <iostream>

template <class TÝP>

void swap (TÝP &p,TÝP &q)
{
	TÝP t=p;
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












