#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using std::ofstream;
using std::ifstream;
const int MAX_IDM=10;
#if 0//1.program
class ZD
{
public:
	ZD()
	{
		cout<<"Error:Zero Division";
	}
};//class ZeroDiv

int main()
{
	int a=2,b=0;
	//cin>>b;
	try
	{
		if(b==0)
			throw ZD();
		a=a/b;
	}
	catch (ZD &z)
	{
		cout<<"sifira bolme hatasi error"<<endl;
	}
}
#endif
#if 0 //2.program calismadi
template <class T>
class Error1
{
	string str;
public:
	Error_1(string _str):str(_str)
	{
	}
	void print()
	{
		cout<<str<<endl;
	}
};//class Error1
class Error2:public Error1
{
public:
	Error2()
	{
	};
	void print()
	{
		cout<<"overflow"<<endl;
	}
};//class Error2


class Array
{
	T *t;
	int dim;
public:
	Array(int _dim)
	{
		if(_dim>=MAX_IDM)
			throw Error1("array dimesion should be less than 10");
		dim=_dim;
	}
	T & operator [] (int _index)
	{
		if(_index >= dim)
			throw Error2();
		return t[_index];
	}
};//class Array
int main()
{
	try
	{
	Array<int> i(10);
	}
	catch (Error1 &e1)
	{
	}
	Array a(10);
	a[0]=a[10]*2;
}
#endif
#if 0
class Error_1
{
	string str;
public:
	//--------------------------------------
	Error_1(string _str):str(_str){}
	//--------------------------------------
	void print(){cout<<str;}
	//--------------------------------------
};
//--------------------------------------------------------------------------
class Error_2
{
public:
	//--------------------------------------
	Error_2(){}
	//--------------------------------------
	void print(){cout<<"overflow\n";}
	//--------------------------------------
};
//--------------------------------------------------------------------------
template <class T>
class Array
{
	T *t;
	int dim;
public:
	//--------------------------------------
	Array(int _dim)
	{
		if(_dim >= MAX_DIM)
			throw Error_1("array dimension should be less than 10");
		dim=_dim;
	}
	//--------------------------------------
	T & operator [] ( int _index )
	{
		if(_index >= dim)
			throw Error_2();
		return t[_index];
	}	
	//--------------------------------------
};
//--------------------------------------------------------------------------
int main(){
	try
	{
	Array<int> i(10);
	}
	catch(Error_1 &e1)
	{
		e1.print();
	}
	catch (Error_2 &e2)
	{
		e2.print();
	}
}
#endif

int main()
{
	string a;
	ofstream ofs("grup2.txt");
	cout<< "Turgut Ozal" <<endl;
	ofs<<"Turgut Ozal"<<endl;
	ofs.close();
	ifstream ifs("grup2.txt");
	ifs >> a;
	ifs.close();
}