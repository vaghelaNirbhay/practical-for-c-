#include<iostream>
using namespace std;
struct student
{
	string name;
	int std;
	float per;	
};
int main ()
{
	student s;
	cout <<"enter information,"<<endl;
	cout<<"enter student name,"<<endl;
	getline(cin,s.name);
	cout<<"enter student standard,"<<endl;
	cin>>s.std;
	cout<<"enter student percentage,"<<endl;
	cin>>s.per;
	
	cout<<"displaying information,"<<endl;
	cout<<"student name is ,"<<s.name<<endl;
	cout<<"student standard is ,"<<s.std<<endl;
	cout<<"student percentage is ,"<<s.per<<endl;
	return 0;
	
}
