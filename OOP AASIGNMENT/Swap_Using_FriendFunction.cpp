#include<iostream>
using namespace std;

class operation{
	
	int x,y;
	
	public:
		void access()
		{
			cout<<"Enter Two Numbers: "<<endl;
			cin>>x>>y;
		}
		
		friend void swap(operation o);
		
};
void swap(operation o)
{
	
	cout<<"Before swap values are: \n"<<o.x<<endl<<o.y;
	o.x=o.x+o.y;
	o.y=o.x-o.y;
	o.x=o.x-o.y;
	
	cout<<endl<<"After swap values are: \n"<<o.x<<endl<<o.y;
}

int main()
{
	operation obj;
	obj.access();
	swap(obj);
	
	return 0;
}

