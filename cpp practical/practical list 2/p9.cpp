#include<iostream>
using namespace std;
int x=5;
int &test();
int main()
{
	int a=10,b=20;
	cout<<"Value of x is::"<<x<<endl;
	int x=15;
	cout<<"Value of x is::"<<x<<endl;
	return 0;
}
int &test()
{
	return x;
}

