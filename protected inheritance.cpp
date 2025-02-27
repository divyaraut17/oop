#include<iostream>
using namespace std;
class Base {
	public:
		int var;	
		Base()
		{
			var=20;
		}
		void show()
		{
			cout<<"Base Method"<<endl;
		}
};
class Derived:protected Base {
	public:
		void showderived(){
			show();
			cout<<"Derived class"<<endl;
			cout<<var<<endl;
		}
	
};
int main()
{
	Derived obj;
	//obj.show();
	obj.showderived();
	return 0;
}
