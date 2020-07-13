#include <iostream>
using namespace std;
class Nokta
{
	int x,y;
public:
	Nokta()
	{
		cout<<"x ve y degerlerini giriniz";
		cin>>x>>y; //classlarda deðiþkenlerþn öncelik sýrasý yoktur
		//istediðimiz zaman tanýmlaya biliriz
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
};// class Nokta// buradaki kodlarý kullanmayada biliriz
//

int main()
{
	Nokta p1;
	p1.yazdir();
	Nokta p2(3,2);
	p2.yazdir();
	
}