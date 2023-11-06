#include<iostream>
using namespace std;
void swap(int &p,int &q)
{
	int temp=p;
	p=q;
	q=temp;
	
}
int main()
{
	int a=10,b=20;
	cout<<"Before sapping a and b is ::"<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"After sapping a and b is ::"<<a<<" "<<b<<endl;
	return 0;
}

