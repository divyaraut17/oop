#include<iostream>
using namespace std;
class Parent
{
	public:
	 void f1()
	 {
	 	cout<<"In parent class";
	 }
};
class Child
{
	public:
		void f1()
		{
			cout<<"\nIn Child class";
		}
};
int main()
{

Parent P;
P.f1();
Child C;
C.f1();
return 0;
}
