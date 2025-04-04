#include<iostream>
using namespace std;
class point{
	private:
		int Xc;
		int Yc;
	public:
	 point(int x=0,int y=0):Xc(x),Yc(y) {
	 };
	 
	 point operator -(point&obj)
	 {
	 	return point(Xc-obj.Xc,Yc-obj.Yc);
	 }
	void show(){
		cout<<Xc<<endl;
		cout<<Yc<<endl;
	} 
};
int main()
{
	point p1(15,10) , p2(9,5);
	point p3 =p1-p2;
	p3.show();
	return 0;
}
