/*Burda operatorlerin a��r� y�klenmesini g�rece�iniz
Operatorlerin a��r� y�klenmesi deyince akl�m�za hi� bir�ey gelmiyo olabilir
ve ilk duydu�umuzda �ok zor bir�ey gibi alg�laya biliriz ama �yle de�ildir.

Operatorler + - * / [] () << >>  gibi  
�imdi + operatorunu ele alal�m + operatoru say�lar� toplama ile y�kl�d�r 
Program� tasarlayanlar + operatorune bu �zelli�i y�klemi�ler
Biz Overloaded operator ler sayesinde + operatoruna ba�ka i�lerde y�kleyebiliriz.

Operatore 2. bir g�rev y�kleriz yani operatoru as�r� y�klemis oluruz.
�rnekle g�relim.
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
