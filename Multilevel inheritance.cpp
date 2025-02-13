#include<iostream>
using namespace std;
class A
{
	public:
	int a;
	void get1()
	{
		cout<<"\nEnter 1st number";
		cin>>a;
	}
	
};
class B:public A
{
	public:
	int b;
	void get2()
	{
	 cout<<"\n Enter 2nd number";
	 cin>>b;	
	}	
};
class c:public B
{
	public:
	void sum()
	{
		cout<<"\nAddition :"<<a+b;
	}
}
int main()
{
	c obj;
	obj.get1();
	obj.get2();
	obj.sum();
	return 0;
 }
