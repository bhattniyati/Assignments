#include<iostream>
using namespace std;

class cricketer{
	
	protected:
		string name;
};

class batsman:public cricketer{
	
	int innings,notout,total_runs,avg_runs,best_performance;
	public:
		void get()
		{
			cout<<"Enter Batsman Name: ";
			cin>>name;
			cout<<"Enter Innings,Notout And Total Runs: ";
			cin>>innings>>notout>>total_runs;
			avg_runs=total_runs/(innings-notout);
			cout<<"Enter Best Score: ";
			cin>>best_performance;
		}
		
		void display()
		{
			cout<<"Batsman Name: "<<name<<endl;
			cout<<"Total Runs: "<<total_runs<<endl;
			cout<<"Average Runs: "<<avg_runs<<endl;
			cout<<"Best_Performance: "<<best_performance;
		}
};

int main()
{
	batsman b1;
	b1.get();
	cout<<endl;
	b1.display();
	
	return 0;
}
