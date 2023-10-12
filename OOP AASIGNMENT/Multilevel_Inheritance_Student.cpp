#include<iostream>
using namespace std;

class student{
	
	int roll_no;
	
	public:
		void get()
		{
			cout<<"Enter Roll Num: ";
			cin>>roll_no;
		}
};

class test:public student{
	
	protected:
	int marks1,marks2;
	
	public:
		void add()
		{
			cout<<endl<<"Enter English Mark: ";
			cin>>marks1;
			cout<<"Enter Gujarati Mark: ";
			cin>>marks2;
		}
};

class result:public test{
	int total_marks;
	
	public:
		void total()
		{
			total_marks=marks1+marks2;
			cout<<endl<<"Total Marks is..."<<total_marks;
		}
};

int main()
{
	result obj;
	obj.get();
	obj.add();
	obj.total();
	
	return 0;
}
