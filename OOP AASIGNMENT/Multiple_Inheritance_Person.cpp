#include<iostream>
using namespace std;

class person{
	
	protected:
	int age;
	string name;
	
	public:
		void add()
		{
			cout<<"Enter The Name: ";
			cin>>name;
			cout<<"Enter The Age: ";
			cin>>age;
		}
};

class student{
	
	protected:
	int percentage;
	
	public:
		void add1()
		{
			cout<<"Enter Percentage: ";
			cin>>percentage;
		}
};

class teacher: public person, public student{
	
	double salary;
	
	public:
		void add2()
		{
			cout<<"Enter Salary: ";
			cin>>salary;
			
			cout<<endl<<"Person Name is..."<<name;
			cout<<endl<<"Person Age is..."<<age;
			cout<<endl<<"Person Percentage is..."<<percentage;
			cout<<endl<<"Person Salary is..."<<salary;
		}
};

int main()
{
	teacher obj;
	obj.add();
	obj.add1();
	obj.add2();
	
	return 0;
}
