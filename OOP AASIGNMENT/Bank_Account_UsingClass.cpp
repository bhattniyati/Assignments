#include<iostream>
using namespace std;

class Bank_Ac{
	
	int ac_no,balance_amt,deposite,withdraw;
	string depositor,type_ac;
	
	public:
		void data()
		{
			cout<<"Enter Name of the Depositor: ";
			cin>>depositor;
			
			cout<<"Enter Account Number: ";
			cin>>ac_no;
			
			cout<<"Enter Type Of Account: ";
			cin>>type_ac;
			
			cout<<"Enter Balance Amount In The Account: ";
			cin>>balance_amt;
		}
		void deposited()
		{
			cout<<endl<<"Enter Deposited Amount: ";
			cin>>deposite;
			balance_amt+=deposite;
		}
		void withdraws()
		{
			cout<<"Enter Withdraw An Amount After Checking Balance: ";
			cin>>withdraw;
			if(balance_amt>withdraw)
			{
				balance_amt-=withdraw;
			}
			else{
				cout<<"Cannot Withdraw Amount"<<endl;
			}
		}
		void display()
		{
			cout<<endl<<"Depositor Name----"<<depositor<<endl;
			cout<<"Balance Amount----"<<balance_amt<<endl;	
		}	
};

int main()
{
	Bank_Ac a1;
	a1.data();
	a1.deposited();
	a1.withdraws();
	a1.display();
	
	return 0;
}
