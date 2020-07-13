/*Burda operatorlerin aþýrý yüklenmesini göreceðiniz
Operatorlerin aþýrý yüklenmesi deyince aklýmýza hiç birþey gelmiyo olabilir
ve ilk duyduðumuzda çok zor birþey gibi algýlaya biliriz ama öyle deðildir.

Operatorler + - * / [] () << >>  gibi  
Þimdi + operatorunu ele alalým + operatoru sayýlarý toplama ile yüklüdür 
Programý tasarlayanlar + operatorune bu özelliði yüklemiþler
Biz Overloaded operator ler sayesinde + operatoruna baþka iþlerde yükleyebiliriz.

Operatore 2. bir görev yükleriz yani operatoru asýrý yüklemis oluruz.
örnekle görelim.
*/
#include <iostream>
using namespace std;

class Sayi
{
	double N1;
public:
	Sayi(double _N1):N1(_N1)
	{
	};
	Sayi operator + (const Sayi &)const;
	void operator() () const;
};//class Karmasik

Sayi Sayi::operator + (const Sayi &c) const
{
	double N2;
}

int main()
{
	Sayi s(1),s2(4);
	s+s2;
}
