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
	

	Kal�c� olarak Kay�t saklama Yollar� 
	1 s�ral� dosyalama yontemi
	2 rastgele erisim yontemi
	*/

//orn; Ogrenci bilgilerini klavyeden girilerek dosyaya yaz�lmas�n� sa�layan bir program yaz..



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
	//nas�l dosya a��l�r
	ofstream ofs("puan.txt");
	cin>>osayi;
	for(int i=0;i<osayi;i++)
	{
		cin>>ogr;
	}
}
