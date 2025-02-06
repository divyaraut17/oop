#include<iostream>
using namespace std;
class Demo
{
	private :
	int *p;
	 
	public:
	void getinfo() 
	{
	  cout<<*p<<endl;	
    }
    void setinfo(int v) 
    {
    	*this->p=v;
	}
	Demo(const Demo& obj) //deep copy
	{
		p=new int(*(obj.p));
	}
	~Demo() //destructor
	{
		cout<<"\n\nDestructor called";
	}
	Demo (int x) //parametarize constructor
	{
		p=new int(x);
	}
};
int main()
{
    Demo d1(111);
	d1.getinfo();
	Demo d2(d1);
	d2.getinfo();
	d1.setinfo(222);
	d1.getinfo();
	return 0;	
}	
