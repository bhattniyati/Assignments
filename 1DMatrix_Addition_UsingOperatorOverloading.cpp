#include<iostream>
using namespace std;

class matrix{
	
	int num[2],result[2],i;
	
	public:
		
		void access()
		{
			cout<<"Enter Matrix Element:\n"<<endl;
			for(i=0;i<2;i++)
			{
				cout<<" ";
				cin>>num[i];
				cout<<endl;
			}
		}
		
		void display()
		{
			for(i=0;i<2;i++)
			{
				cout<<" ";
				cout<<num[i]<<"\t";
				cout<<endl;
			}
		}
		
		void operator +(matrix x)
		{
			for(i=0;i<2;i++)
			{
				result[i]=num[i]+x.num[i];
			}
			
			cout<<endl;
			cout<<"Addition of Matrix is: \n \n";
			for(i=0;i<2;i++)
			{
				
				cout<<result[i];
				cout<<" ";
			}
		}
};

int main()
{
	matrix m1;
	matrix m2;
	
	m1.access(); // accepting rows
	m2.access(); // accepting columns
	
	cout<<"First Matrix\n"<<endl;
	m1.display(); // displaying first matrix
	cout<<"\nSecond Matrix\n"<<endl;
	m2.display(); // displaying second matrix
	
	m1+m2;  // addition of 2 matrix..
	
	
	return 0;
}
