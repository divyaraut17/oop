#include<iostream>
using namespace std;
class Base {
	public:
		int var;
		Base()
		{
			var=10;
		}
		void show()
		{
			cout<<"Base Method"<<endl;
		}
};
class Derived:public Base {
	public:
		void showderived(){
			cout<<"Derived class"<<endl;
			cout<<var<<endl;
		}
	
};
int main()
{
	Derived obj;
	obj.show();
	obj.showderived();
	return 0;
}
