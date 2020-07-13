	// 9.05.2012 tarihli dersin tekrar�d�r.
	/*
		Sablon yap�lar� veri tipi/veri�ei�idi olarak birbirinden gerekli program mant��� ve algoritma olarak biribirne
		benzer s�n�f ve fonskiyon tan�mlamay� sa�layan kal�pla�m�� yap�lard�r.
	*/

	#include <iostream>
	#include <string>
	using namespace std;

#if 1
	//Sablon s�n�flar --> Template classes
	
		/*Ger�el	Sanal
	z1		int		int
	z2		double	int
	z3		int		double
	z4		double	double
	sablon	G		S
	veritipi	
*/

	//soru sablon s�n�f nas�l tan�mlan�r???????
	//cevap
	template <typename G,typename S> //sablonlar� buyuk harfle tan�mla kar��ma riski azal�r
	class Karmasik
	{
		G gercel;
		S sanal;
	public:
		Karmasik(G _gercel,S _sanal);
		{
		}
		void yazdir() const
		{
			cout<<gercel<<"+ i"<<sanal<<endl;
		}
		Karmasik<G,S> &operator * (Karmasik<G,S>&);//portatif
	};//class Karmasik
	//sablon s�n�f�na ait yap�c� fonksiyon tan�lanmasi
	template <class G,class S>
	Karmasik< G , S > &Karmasik < G , S >::operator * (Karmasik<G,S>&z)
	{
		G g = this-> (gercel * (z.gercel)) - (this-> sanal * (z.sanal));
		S s = this-> sanal * (z.gercel) + this-> gercel * (z.sanal);
		this-> gercel = g; this-> sanal = s;
		return *this;
	}
	
	
	
	int main()
	{
		Karmasik <int,double> z1(3,5.1);
		Karmasik <int,double> z2(3.1,5.1);
	}
#endif
#if 0
	// sablon fonksiyon hat�rlatma
	template <typename T> //template <class T> de yazabiliriz

	//yer de�i�tirme fonksiyonu tan�mlayal�m 
	void Swap (T &p , T &q)
	{
		T t=p;
		p=q;
		q=t;
	}


	int main()
	{
		char a='A',b='B';
		Swap(a,b);
		int x=5,y=10;
		Swap(x,y);
		double k,j;
		cin>>k,j;
		Swap(k,j);
	}
	//g�r�ld��� �zere her bir veritipi i�in char ,int,double ve kesir i�in ker�leyici swap fonksiyonu
	//olu�turmak tad�r ��lemm run time da da ger�ekle�ir  hemen deneyelim

#endif