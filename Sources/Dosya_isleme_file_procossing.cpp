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
using namespace std;
using std:ofstream;