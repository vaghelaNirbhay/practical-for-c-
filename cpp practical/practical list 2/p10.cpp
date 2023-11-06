#include<iostream>
using namespace std;
float area(float,float PI=3.14);
int main()
{
	float r;
	cout<<"Enter the radius :: "<<endl;
	cin>>r;
	cout<<"Area of circle is ::"<<area(r)<<endl;
	return 0;
}
float area(float r,float PI)
{
	return PI*r*r;
}

