#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a=12345;
	
	cout<<"value of a is ::"<<setfill('0')<<setw(7)<<a<<endl;
	return 0;
}
