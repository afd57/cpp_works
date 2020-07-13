// Temel sýnýfa ait public,private,protocted üyelerin türetilen sýnýf ve 
//sýnýf dýþýndan eriþimi anlatacaz
/*
______________________________________________________________________
**   Üye Tipleri    **	TemelS.		**	Turetilen	**SýnýfDisinda  **
______________________________________________________________________
**					**	Eriþilir	**	Eriþilir	**	Eriþilir	**
**	  public		**				**				**				**
______________________________________________________________________
**	 protocted		**	Eriþilir	**	Erisilir	**	Erisilmez	**
**					**				**				**				**
______________________________________________________________________
**	  private		**	Eriþilir	**	Erisilmez	**	Erisilmez	**
**					**				**				**				**
######################################################################


Tabloda gayet acik bir sekilde görülüyor
*/
//örnekler

#include <iostream>


class Temel
{
private:
	int pri;
protected:
	int pro;
public:
	int pub;
	void ata(int _pri)
	{
		pri=_pri;
	}

};//class Temel

class Turetilen:public Temel
{
public:
	void ata(int _pri,int _pro,int _pub)
	{
		
		//_pri=pri; <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
		//derleyici hata verir çünkü private üyelere 
		//sýnýf dýþýnda eriþim yoktur bunu nasýl çözeriz 
		//Temel sýnýfýndaki ata fonksiyonu public olduðu için ona eriþir
		// ordanda private üyeye deðer atarýz
		Temel.ata(_pri);//private üyeye deðerimizi atadýk
		_pro=pro;
		_pub=pub;
	}
};//class Turetilen:public Temel



int main()
{
	Turetilen t;
	t.ata(5,7,3);
	//Turetilen classýnda 2 tane ata diye public üye var
	//eðer yukardaki gibi yazarsak classýn içindeki ata yi kullanýr

	//bu sekil yaparsak Temel sýnýfýndaki private üyeye 1 deðeri tanýr
	t.Temel::ata(1);
}






