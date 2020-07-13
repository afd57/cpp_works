/*
	Dosya Olusturma -> create
	Dosya Yazma		-> write
	Dosya G�ncelleme-> Update
	Dosya Okuma     -> Reading

	eskiden yazd���m�z programlar ge�ici haf�za tutulan programlar veriler consol ekran�nda 
	g�r�r�n�r giderdi ama art�k yapaca��m�z programlar ge�ici de�il kal�c� olarak Herhangibir 
	depolama arac�na kaydedilecek

	Bu derste dosya i�leme ve kal�c� olarak veri saklama konusunu ele alacaz.
	K�t�phanemiz     #include <fstream>
	using std::ifstream;  //dosya okumak i�in kullanaca��m�z paket
	using std::ofstream; // dosya yazmak i�in kullanaca��m�z paket

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