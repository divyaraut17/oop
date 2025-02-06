#include<iostream>
using namespace std;
class Circle
{
	public:
	int r;
	float area;
	
	Circle()
	{
	  cout<<"\n enter the radius";
	  cin>>r;
	  area=3.142*r*r;
	  cout<<"\n\n Area: "<<area;	
	}
	Circle (int r1)
	{
	  r=r1;
	  area=3.142*r*r;
	  cout<<"\n\n Area: "<<area;	
	}	
	Circle(Circle& obj)
	{
		r=obj.r;
		area=3.142*r*r;
		cout<<"\n\nArea: "<<area;
	}
	~Circle()
	{
		cout<<"\n\nDestructor run";
	}
};
int main()
{
	Circle c1;
	cout<<"\n\nRadius1: "<<c1.r;
	Circle c2(10);
	cout<<"\n\nRadius2: "<<c2.r;
	Circle c3=c1;
	cout<<"\n\nRadius3: "<<c3.r;
}
