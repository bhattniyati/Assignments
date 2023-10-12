#include<iostream>
using namespace std;

class sum{
	
	int result;
	public:
	void add()
	{
		int a,b;
		
		cout<<"Enter Two Values: "<<endl;
		cin>>a>>b;
		
		result=a+b;
		cout<<"Addition is: "<<result<<"\n \n";
	}
	
	void add(int a, int b)
	{
		result=a-b;
		cout<<"Substraction is: "<<result<<"\n \n";
	}
	
	void add(int a, int b, int c)
	{
		result=a*b*c;
		cout<<"Multiplication is: "<<result<<"\n \n";
	}
	
	void add(double a, double b)
	{
		result=a/b;
		cout<<"Division is: "<<result<<"\n \n";
	}
};

int main()
{
	sum s1;
	
	s1.add();
	s1.add(100,60);
	s1.add(5,3,2);
	s1.add(50.00,5.00);
	
	return 0;
}
