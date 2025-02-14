#include<iostream>
using namespace std;

class A
{

   public:
   	int a,b;
   	void get()
   	{
   	    cout<<"\nEnter two Numbers:";
		   cin>>a>>b;	
	}
};
class B:virtual public A
{
   public:
   	  int s;
	void sum()
	{
		s=a+b;
	}
    
};
class C:virtual public A
{ 
    public:
    	int h;
	void subtraction()
   	{
   	    h=a-b;	
	}
};
class D:public B,public C
{
	public:
		void display()
		{
			cout<<"\nAddition is :"<<a+b;
			cout<<"\nSubtraction is:"<<a-b;
		}
};
int main()
{
	D obj;
	obj.get();
	obj.display();
	return 0;
}
