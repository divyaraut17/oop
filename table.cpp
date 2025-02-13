#include<iostream>
using namespace std;

class table
{
	public :
		int num;
		int arr[10];
		void get()
		{
			cout<<"Enter number :";
			cin>>num;
		}
		void multiplicationTable()
		{
			int i;
			for(i=1;i<11;i++)
			{
				arr[i-1]=num*i;
			}
		}
		void show()
		{
			int i;
			cout<<"Table of "<<num<<"\n";
			for(i=0;i<10;i++)
			{
				cout<<arr[i]<<"\n";
			}
		}
};

int main()
{
	table t;
	t.get();
	t.multiplicationTable();
	t.show();
}
