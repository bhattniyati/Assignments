#include<iostream>
using namespace std;

class operation{
	
	int h,b;
	double r;
	
	public:
		void area()
		{
			int length, width;
			
			cout<<"Enter Length: ";
			cin>>length;
			cout<<"Enter Width: ";
			cin>>width;
			cout<<"AREA OF RECTANGLE IS--- "<<length*width<<endl;
		}
		
		void area(int hieght, int base)
		{
			h=hieght;
			b=base;
			cout<<endl<<"AREA OF TRAINGLR IS--- "<<0.5*h*b<<endl;
		}
		
		void area(double radius)
		{
			r=radius;
			cout<<"AREA OF CIRCLE IS--- "<<3.14*r*r<<endl;
		}
};

int main()
{
	operation obj;
	obj.area();
	obj.area(10,5);
	obj.area(6);
	
	return 0;
}
