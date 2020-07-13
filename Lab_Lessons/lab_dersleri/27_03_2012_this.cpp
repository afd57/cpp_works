#include <iostream>
using namespace std;
class Adres
{
	int x;
public:
	int GetAdress()
	{
		return (int)this;
	}
};//class adress


int main()
{
	Adres adr;
	Adres adr2;
	std::cout<<(int)adr.GetAdress()<<std::endl;
	std::cout<<(int)adr2.GetAdress();
	std::cout<<(int)(&adr);
}