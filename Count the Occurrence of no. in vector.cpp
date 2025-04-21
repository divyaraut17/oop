#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	//snytax fr vector vector<data_type> var_name={val_1,val_2,....val_n}
	int arr[]={5,5,5,7,8,3,2,3,3,3,3,4,4,1,1,1,1};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(int));
	int target,c;
	cout<<"Enter the number:";
	cin>>target;
	c=count(v.begin(),v.end(),target);
	cout<<"count: "<<c;
	return 0;
}
