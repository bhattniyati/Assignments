#include<iostream>
using namespace std;

class calculator{
	
	int no1,no2,sum;
	
	public:
	char choice;
	void menu()
	{
		cout<<"Enter + For Addition "<<endl<<"Enter - For Substraction "<<endl<<"Enter * For Multiplication "<<endl<<"Enter / For Division "<<endl<<"Enter % For Modulo "<<"\n \n";
	}
	
	void get_choice()
	{
		cout<<"Enter Your Choice: "<<endl;
		cin>>choice;
	} 
	
	void add()
	{
		cout<<"Enter First Num: "<<endl;
		cin>>no1;
		cout<<"Enter Second Num: "<<endl;
		cin>>no2;
		
		sum=no1+no2;
		cout<<"Addition is: "<<sum;
	}
	
	void sub()
	{
		cout<<"Enter First Num: "<<endl;
		cin>>no1;
		cout<<"Enter Second Num: "<<endl;
		cin>>no2;
		
		sum=no1-no2;
		cout<<"Substraction is: "<<sum;
	}
	
	void multiply()
	{
		cout<<"Enter First Num: "<<endl;
		cin>>no1;
		cout<<"Enter Second Num: "<<endl;
		cin>>no2;
		
		sum=no1*no2;
		cout<<"Multiplication is: "<<sum;
	}
	
	void division()
	{
		cout<<"Enter First Num: "<<endl;
		cin>>no1;
		cout<<"Enter Second Num: "<<endl;
		cin>>no2;
		
		sum=no1/no2;
		cout<<"Division is: "<<sum;
	}
	
	void modulo()
	{
		cout<<"Enter First Num: "<<endl;
		cin>>no1;
		cout<<"Enter Second Num: "<<endl;
		cin>>no2;
		
		sum=no1%no2;
		cout<<"Division is: "<<sum;
	}
};

int main()
{
	calculator c;
	
	c.menu();
	c.get_choice();
	
	switch(c.choice)
	{
		case '+':
			c.add();
			break;
		
		case '-':
			c.sub();
			break;
			
		case '*':
			c.multiply();
			break;
			
		case '/':
			c.division();
			break;
			
		case '%':
			c.modulo();
			break;
			
		default:
			cout<<"Invalid Choice !!!!!";
			break;
	}
	
	return 0;
}
