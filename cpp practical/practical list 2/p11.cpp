#include<iostream>
using namespace std;
int test(const int);

int main()
{
	cout<<"Value of z ::"<<test(5)<<endl;
	
	
	return 0;
}
int test(const int z)
{
	return z;
}

