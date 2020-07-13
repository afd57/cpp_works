#include <iostream>

int kackere()
{
	static int sayac=0;
	sayac++;
	return sayac;

}

int main()
{
	kackere();
	kackere();
	kackere();
	kackere();
	kackere();
	kackere();
	kackere();
	kackere();
	std::cout<<kackere();
}
