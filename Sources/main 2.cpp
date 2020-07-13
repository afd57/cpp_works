#include<iostream>
using namespace std;
///////
class Araba
{
protected:
	int yas;
	int fiyat;
public:
	void yazdir()
	{
		cout<<yas<<fiyat;
	}

};

class BMW : public Araba
{
	int beygir;
public:
	void Tanimla()
	{
		cin>>beygir;
		cin>>yas;
		cin>>fiyat;
	}
};

int main() 
{
	BMW b1;
	b1.Tanimla();
	b1.yazdir();

} 

