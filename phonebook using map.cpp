#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	//snytax fr map map<key_data_type,val_data_type> var_name;
	//var_name[key1]=val 1;
	//var_namer[key 2]=val 2;
	
	map<string, string> phonebook;
	phonebook["divya"]="675643700";
	phonebook["tushar"]="8965432000";
	
	string name;
	cout<<"Enter the name: ";
	cin>>name;
	if(phonebook.find(name)!=phonebook.end())
	    cout<<name<<" :"<<phonebook[name];
	else
	   cout<<name<<" not found";    
	return 0;
}
