#include<iostream>
using namespace std;

class concat{
	
	public:
		char s1[50], s2[50];
		
		void addstring(char str1[], str2[])
		{
			s1=str1[];
			s2=str2[];
			
			cout<<"Enter String One:";
			cin>>str1[];
			cout<<"Enter String Two:";
			cin>>str2[];
		}
		
		void display()
		{
			cout<<"\n String Are"<<str1[]<<str2[]<<endl;
		}
		
		void operator +(concat add)
		{
			concat s3;
			s3.str1[]=str1[]+add.str1[];
			s3.str2[]=str2[]+add.str2[];
			cout<<"Concatenate String is: "<<s3.str1[]<<s3.str2[];
		}
	
};

int main()
{
	concat c1;
	concat c2;
	
	c1.addstring();
	c2.addstring();
	
	cout<<"String One";
	c1.display();
	cout<<"String Two";
	c2.display();
	
	c1+c2;
	
	return 0;
}
