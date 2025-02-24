#include<iostream>
using namespace std;
class Complex
{
	public:
	int real,img;
	
	Complex()
	{
	   cout<<"enter complex no:";
	   cin>>real>>img;	
	}	
	Complex operator+(Complex c4)
	{
		Complex c5;
		c5.real=real+c4.real;
		c5.img=img+c4.img;
		return c5;
	}
	void display()
	{
		cout<<"sum:"<<real<<"+"<<img<<"i";
	}
};
int main()
{
	Complex c1;
	Complex c2;
	Complex c3=c1+c2; //operator overloading
	c3.display();
	return 0;
}
