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
class B
{
	public:
	int b;
	void get2()
	{
	 cout<<"\n Enter 2nd number";
	 cin>>b;	
	}	
};	
class C:public A,public B
{
	public:
	void sum()
	{
	  cout<<"\n Addition:"<<a+b;	
	} 
};
int main()
{
	C obj;
	obj.get1();
	obj.get2();
	obj.sum();
	return 0;
}
