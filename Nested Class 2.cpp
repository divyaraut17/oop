#include<iostream>
using namespace std;

class Outer{
	private:
		int a;
	public:
	  void setdata(int val)
        {
		a=val;
		}	
		void getdata()
		{
			cout<<a<<endl;
		}
		class inner{
			int b;
			public:
				void setdata(int val)
				{
					b=val;
				}
				void getdata()
					{
						cout<<b<<endl;
					}
		};
};
int main()
{
	Outer ol;
	ol.setdata(4);
	ol.getdata();
	
	Outer::inner i1;
	i1.setdata(9);
	i1.getdata();
}
