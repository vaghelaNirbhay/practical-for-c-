#include<iostream>
using namespace std;

class employee
{
	public:
		int id ;
		string name ;
		int salary ;
		employee(int id,string name,int salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void display()
		{
			cout<<"ID is     ::"<<id<<endl;
			cout<<"Name is   ::"<<name<<endl;
			cout<<"Salary is ::"<<salary<<endl<<endl;
		}
};
int main()
{
	employee e1(101,"rahim",50,000);
	employee e2(102,"rudr",50,000);
	e1.display();
	e2.display();
	return 0;
}
