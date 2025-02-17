#include<iostream>
using namespace std;
class Parent
{
	public:
	virtual  void f1()
	 {
	 	cout<<"In parent class";
	 }
};
class Child:public Parent
{
	public:
		void f1()
		{
			cout<<"\nIn Child class";
		}
};
int main()
{

Parent *P;
Child C;
P=&C;
P->f1();//child class
return 0;
}
