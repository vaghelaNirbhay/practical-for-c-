#include<iostream>
using namespace std;

class employee
{
	private:
		string name;
		int Id;
	
	public:
	  void	getdata()
	  {
	  	cout<<"Enter the Id :: ";
    		cin>>Id;
    		cin.ignore();
    	cout<<"Enter the Name :: ";
    		getline(cin,name);
	  }
	  void display_employee();

};

void employee ::display_employee()
{
    cout << "Employee details:\n";
    cout << "ID::"<<Id<<endl;
    cout <<"Name::"<<name;
}
int main()
{
    employee e1;
    
    e1.getdata();
    e1.display_employee();

    return 0;
}
