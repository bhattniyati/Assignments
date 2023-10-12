#include<iostream>
using namespace std;

class myclass{
	
	int num1,num2;
	
	public:
		void get()
		{
			cout<<"Enter First Number: "<<endl;
			cin>>num1;
			cout<<"Enter Second Number: "<<endl;
			cin>>num2;
		}
		
		friend void max(myclass);
};

void max(myclass m)
{
	if(m.num1>m.num2)
	{
		cout<<"Largest is: "<<m.num1;
	}
	else
	{
		cout<<"Largset is: "<<m.num2;
	}
}

int main()
{
	myclass obj;
	obj.get();
	max(obj);
	
	return 0;
}
