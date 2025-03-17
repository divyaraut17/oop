#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter two number for Division:";
	cin>>b>>c;
	try
	{
		if(c==0)
		throw "Divide by zero Error!";
		a=b/c;
		cout<<"Answer="<<a;
	}
	catch(const char *str)
	{
		cout<<"Exception:"<<str;
	}
	return 0;
}
