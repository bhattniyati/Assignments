#include<iostream>
using namespace std;
#define N 5

template <class T>
void sort(T arr[], int s)
{
	for (int i=0; i<s; i++)
	{
		for (int j=i+1; j<s; j++)
		{
			if (arr[i]>arr[j])
			{
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main()
{
	int int_array[N];
	float float_array[N];
	
	cout<<"Entner First Array Elements: "<<endl;
	for (int i=0; i<N; i++)
	{
		cin>>int_array[i];
	}
	
	cout<<"Entner Second Array Elements: "<<endl;
	for (int i=0; i<N; i++)
	{
		cin>>float_array[i];
	}
	
	sort(int_array,N);
	sort(float_array,N);
	
	cout<<"After Sorting They Are: "<<endl<<endl;
	for (int i=0; i<N; i++)
	{
		cout<<int_array[i]<<"  ";
	}
	cout<<endl;
	for (int i=0; i<N; i++)
	{
		cout<<float_array[i]<<"  ";
	}
	
	return 0;
}
