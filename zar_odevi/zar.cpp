#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
static int tura_Sayici;
class YaziTura
{
	std::string oyuncu_ismi;
	int p;
public:
	YaziTura()
	{
		srand(time(0));
		cout<<"Oyuncu ismini giriniz:";
		cin>>oyuncu_ismi;
	}
	int Para_At()
	{
		return p=rand()%2;
	}
	void Oyna()
	{
		int sonuc = Para_At();
		if(sonuc == 1)
		{
			tura_Sayici++;
		}
		else
		{
		}
	}
	string oyuncu_ismi_dondur()
	{
		return oyuncu_ismi;
	}
};
int main()
{
	char a;
	YaziTura oyun1;
	do
	{
		cout<<oyun1.oyuncu_ismi_dondur()<<"! Yazi Tura icin ENTER ' a Bas"<<endl;
		scanf("%c",&a);
	}
	while(a='q');
}