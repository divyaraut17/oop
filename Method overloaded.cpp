#include<iostream>
using namespace std;
class Shapes
{
  public:
	float a;
	void area(float r)
	{
	    a=3.142*r*r;
		cout<<"Area of circle= "<<a;	
	}	
	void area(int l,int b)
	{
		a=l*b;
		cout<<"\nArea of rectangle="<<a;
	}
	
};
int main()
{
Shapes S;
S.area(5);
S.area(4,5);
return 0;
}
