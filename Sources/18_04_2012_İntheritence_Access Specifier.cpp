// Temel s�n�fa ait public,private,protocted �yelerin t�retilen s�n�f ve 
//s�n�f d���ndan eri�imi anlatacaz
/*
______________________________________________________________________
**   �ye Tipleri    **	TemelS.		**	Turetilen	**S�n�fDisinda  **
______________________________________________________________________
**					**	Eri�ilir	**	Eri�ilir	**	Eri�ilir	**
**	  public		**				**				**				**
______________________________________________________________________
**	 protocted		**	Eri�ilir	**	Erisilir	**	Erisilmez	**
**					**				**				**				**
______________________________________________________________________
**	  private		**	Eri�ilir	**	Erisilmez	**	Erisilmez	**
**					**				**				**				**
######################################################################


Tabloda gayet acik bir sekilde g�r�l�yor
*/
//�rnekler

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
		//derleyici hata verir ��nk� private �yelere 
		//s�n�f d���nda eri�im yoktur bunu nas�l ��zeriz 
		//Temel s�n�f�ndaki ata fonksiyonu public oldu�u i�in ona eri�ir
		// ordanda private �yeye de�er atar�z
		Temel.ata(_pri);//private �yeye de�erimizi atad�k
		_pro=pro;
		_pub=pub;
	}
};//class Turetilen:public Temel



int main()
{
	Turetilen t;
	t.ata(5,7,3);
	//Turetilen class�nda 2 tane ata diye public �ye var
	//e�er yukardaki gibi yazarsak class�n i�indeki ata yi kullan�r

	//bu sekil yaparsak Temel s�n�f�ndaki private �yeye 1 de�eri tan�r
	t.Temel::ata(1);
}






