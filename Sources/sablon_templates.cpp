	// 9.05.2012 tarihli dersin tekrarýdýr.
	/*
		Sablon yapýlarý veri tipi/veriçeiþidi olarak birbirinden gerekli program mantýðý ve algoritma olarak biribirne
		benzer sýnýf ve fonskiyon tanýmlamayý saðlayan kalýplaþmýþ yapýlardýr.
	*/

	#include <iostream>
	#include <string>
	using namespace std;

#if 1
	//Sablon sýnýflar --> Template classes
	
		/*Gerçel	Sanal
	z1		int		int
	z2		double	int
	z3		int		double
	z4		double	double
	sablon	G		S
	veritipi	
*/

	//soru sablon sýnýf nasýl tanýmlanýr???????
	//cevap
	template <typename G,typename S> //sablonlarý buyuk harfle tanýmla karýþma riski azalýr
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
	//sablon sýnýfýna ait yapýcý fonksiyon tanýlanmasi
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
	// sablon fonksiyon hatýrlatma
	template <typename T> //template <class T> de yazabiliriz

	//yer deðiþtirme fonksiyonu tanýmlayalým 
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
	//görüldüðü üzere her bir veritipi için char ,int,double ve kesir için kerþleyici swap fonksiyonu
	//oluþturmak tadýr Ýþlemm run time da da gerçekleþir  hemen deneyelim

#endif