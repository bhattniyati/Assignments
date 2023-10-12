#include<iostream>
using namespace std;

class calculator{
	
	int num1,num2,result;
	
	public:
		calculator()
		{
			cout<<"Enter First Number: "<<endl;
			cin>>num1;
			
			cout<<"Enter Second Number: "<<endl;
			cin>>num2;
		}
		
		calculator(int no1, int no2)
		{
			result=no1+no2;
			cout<<"Addition is= "<<result<<endl;
		}
		
		calculator(int no1)
		{
			int no2=100;
			
			result=no1-no2;
			cout<<"Substarction is= "<<result<<endl;
		}
		
		calculator(double no1, double no2)
		{
			result=no1/no2;
			cout<<"Division is= "<<result<<endl;
		}
		
		calculator(int no1, double no2)
		{
			result=no1*no2;
			cout<<"Multiplication is= "<<result<<endl;
		}	
};

int main()
{
	calculator data();
	calculator add(50,60);
	calculator sub(200);
	calculator divide(100.00,50.00);
	calculator multi(20,20.00);
	
	return 0;
}
