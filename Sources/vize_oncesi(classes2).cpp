#include <iostream>
using namespace std;
class Nokta
{
	int x,y;
public:
	Nokta()
	{
		cout<<"x ve y degerlerini giriniz";
		cin>>x>>y; //classlarda de�i�kenler�n �ncelik s�ras� yoktur
		//istedi�imiz zaman tan�mlaya biliriz
	}
	Nokta(int _x,int _y)
	{
		x=_x;
		y=_y;
	}
	void yazdir()
	{
		cout<<x<<'-'<<y<<endl;
	}
};// class Nokta// buradaki kodlar� kullanmayada biliriz
//

int main()
{
	Nokta p1;
	p1.yazdir();
	Nokta p2(3,2);
	p2.yazdir();
	
}