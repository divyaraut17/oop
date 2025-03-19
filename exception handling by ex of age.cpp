include<iostream>
using namespace std;

int main()
{    
    int age;
	cout<<"Enter the age :";
	cin>>age;
	try
	{
		if(age<0)
		throw "Invalid age";
		else if(age==0)
		throw "zero age";
		else
		cout<<"valid age :"<<age<<endl;
		cout<<"age:"<<age;
		
	}
	catch(const char *str)
	{
		cout<<"Exception:"<<str;
	}
	return 0;
}
