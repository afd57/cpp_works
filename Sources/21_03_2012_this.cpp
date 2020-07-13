/* özel isaretci this operatoru her bir nesne kendi adresine this isaretcisi
ile ulasabilir*/
#include <iostream>
using namespace std;
class Kesir
{
private:
	int pay,payda;
public:
	//*****************YAPICI CONSTRCUTS******************
	Kesir(int i_pay,int i_payda):pay(i_pay),payda(i_payda)
	{
		if(this -> payda == 0)
			exit(1);
	}
	//****************************************************
	//*******************YAZDIR FONKSÝYONU****************
	void yazdir() const 
	{
		if(pay==payda)
		{
			cout<<pay/payda;
		}
		else
		cout<<this -> pay <<'/'<<(*this).payda<<endl;
	}
	//*****************************************************
	//*******************TOPLA FONKSÝYONU******************
	void topla(const Kesir & diger)
	{
		//diger 2. kesir
		//this ile çaðýrdýklarýmýz 1. kesir
		if((*this).payda==diger.payda)
		{
			(*this).pay=(*this).pay+diger.pay;
			(*this).payda=diger.payda;
		}
		else
		{
		(*this).payda=(*this).payda*diger.payda;
		this ->pay=(*this).payda*diger.pay+diger.payda*(*this).pay;
		}
		
		sadelestir((*this).pay,(*this).payda);
	}
	//*****************************************************
	void sadelestir(int pay,int payda)
	{
		for(int i=1;0<i;i++)
		{
			if(payda%pay==0)
			{
				this->payda=payda/pay;
				this->pay=pay/payda;
				i=-2;
			}
			else if(payda%i==0 && pay==0)
			{
				this->payda=payda/i;
				this->pay=pay/i;
				i=-2;
			}
			else if(i<pay){i=-2;}
			else if(i<payda){i=-2;}
		}
	}//void sadelestir(int pay,int payda)
	
};//class Kesir

int main()
{
	Kesir x(1,2),y(1,2);
	x.topla(y); //x=x+y
	x.yazdir();
}