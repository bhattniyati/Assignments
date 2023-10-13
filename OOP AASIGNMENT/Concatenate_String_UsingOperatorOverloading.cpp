#include<iostream>
using namespace std;

class concat{

	string name1;
		
		public:		
		void addstring()
		{
			cin>>name1;
		}
		
		void display()
		{
			cout<<name1;
		}
		
		void operator +(concat add)
		{
			concat res;
			res.name1=name1+" "+add.name1;
			cout<<res.name1;
		}
		
};

int main()
{
	
	concat c1;
	concat c2;
	
	cout<<"Enter The First String: ";
	c1.addstring();
	cout<<"Enter The Second String: ";
	c2.addstring();
	
	cout<<"\nFirst String: "<<endl;
	c1.display();
	cout<<"\n \nSecond String: "<<endl;
	c2.display();
	
	cout<<endl<<"\nConcatenate String: "<<endl;
	c1+c2;
	
	return 0;
}
