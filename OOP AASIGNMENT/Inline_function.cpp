#include<iostream>
using namespace std;

class inline_func{
	
	public:
	
		inline int mul(int a, int b)
		{
			return a*b;
		}
		
		inline int cube(int x)
		{
			return (x*x*x);
		}
};

int main()
{
	inline_func a1;
	int num1,num2;
	
	cout<<"Enter First Number: ";
	cin>>num1;
	
	cout<<"Enter Second Number: ";
	cin>>num2;
	
	cout<<"Multiplication Value is: "<<a1.mul(num1,num2)<<endl;
	cout<<"Cube Value is: "<<a1.cube(num1);
	
	return 0;
}
