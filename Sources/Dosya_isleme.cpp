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

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using std::ofstream;
using std::ifstream;

class Ogrenci
{
	string ad;
	double puan;
	int no;
public:
	friend ofstream & operator << (ofstream &ofs,Ogrenci &ogr)
	{
		ofs<<ogr.no<<ogr.ad<<ogr.puan;
		return ofs;
	}
	friend istream & operator >> (istream &ifs, Ogrenci &ogr)
	{
		ifs>>ogr.no>>ogr.ad>>ogr.puan;
		return ifs;
	}
};//class Ogrenci



int main()
{
	Ogrenci ogr;
	int ogr_sayi;
	ofstream ofs("puan.txt");
	// yada
	//ofstream ofs;
	//open.ofs("puan.txt");
}