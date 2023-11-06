#include<iostream>
using namespace std;

class temp
{
	public: 
		void show();
};
int main()
{
	temp a1;
	a1.show();
	return 0;
}
void temp :: show()
{
	cout<<"This is a c++ program"<<endl;
}
