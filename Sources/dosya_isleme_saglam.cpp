/*
	Dosya Olusturma -> create
	Dosya Yazma		-> write
	Dosya Güncelleme-> Update
	Dosya Okuma     -> Reading

	eskiden yazdýðýmýz programlar geçici hafýza tutulan programlar veriler consol ekranýnda 
	görürünür giderdi ama artýk yapacaðýmýz programlar geçici deðil kalýcý olarak Herhangibir 
	depolama aracýna kaydedilecek

	Bu derste dosya iþleme ve kalýcý olarak veri saklama konusunu ele alacaz.
	Kütüphanemiz     #include <fstream>
	using std::ifstream;  //dosya okumak için kullanacaðýmýz paket
	using std::ofstream; // dosya yazmak için kullanacaðýmýz paket
	

	Kalýcý olarak Kayýt saklama Yollarý 
	1 sýralý dosyalama yontemi
	2 rastgele erisim yontemi
	*/

//orn; Ogrenci bilgilerini klavyeden girilerek dosyaya yazýlmasýný saðlayan bir program yaz..



#include <iostream>
#include <string>
#include <fstream>
using namespace std;
using std::ifstream;
using std::ofstream;

class Ogrenci
{
	int no;
	double not;
	string ad;
public:
	friend ofstream & operator << (ofstream &ofs , Ogrenci &ogr )
	{
		ofs<<ogr.no<<"/t"<<ogr.ad<<"/t"<<ogr.not<<endl;
		return ofs;
	}
	friend ifstream & operator >> (ifstream &ifs, Ogrenci &ogr)
	{
		ifs>>ogr.no>>"/t">>ogr.ad>>"\t">>ogr.not;
		return ifs;
	}
	string getad()
	{
		return ad;
	}
	int getno()
	{
		return no;
	}
	double getnot()
	{
		return not;
	}
};//class Ogrenci

int main()
{
	Ogrenci ogr;
	int osayi;
	//nasýl dosya açýlýr
	ofstream ofs("puan.txt");
	cin>>osayi;
	for(int i=0;i<osayi;i++)
	{
		cin>>ogr;
	}
}
