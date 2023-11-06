#include<iostream>
using namespace std;
class Myclass
{
	public:
		static int staticvar;
};

int Myclass::staticvar = 100;

int main()
{
	cout<<"Static variable value::"<<Myclass::staticvar<<endl;
	Myclass::staticvar = 200;
	cout<<"Static variable value::"<<Myclass::staticvar<<endl;
	return 0;
	
}
