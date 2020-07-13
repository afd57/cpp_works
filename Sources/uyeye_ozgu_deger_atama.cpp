#include <iostream>
#include <string>

using namespace std;

class B
{
	bool b;
public:
	B(bool bb):b(bb)// ':' önemli koymazsak atama yapmaz
	{

	}
};

int main()
{
	B bb(true);
	//bb(true); gizlilik korundu
}