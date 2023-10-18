#include<iostream>
using namespace std;

template<class A>

	A swap(A no1,A no2)
	{
		no1=no1+no2;
		no2=no1-no2;
		no1=no1-no2;
		cout<<"After swaping values are: "<<no1<<" , "<<no2;
	}
		
	int main()
	{
		swap(2,5);
		cout<<endl;
		swap(2.7,5.8);
		
		return 0;
	}

