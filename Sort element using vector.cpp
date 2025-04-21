#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	//snytax fr vector vector<data_type> var_name={val_1,val_2,....val_n}
	int arr[]={5,3,2,4,1};
	vector<int> v(arr,arr+5);
	int c;
	sort(v.begin()+2,v.end());
	for(c=0; c<5; c++)
	    cout<<v[c]<<" ";
	return 0;
}
