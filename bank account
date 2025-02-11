#include<iostream>
#include<string>
using namespace std;
class Bankaccount{
	private:
	string accountHolder;
	int accountNumber;
	string accountType;
	double accountbalance;
	
	public:
	Bankaccount() //default constructor
	{
	  accountHolder=" ";
	  accountNumber	=0;
	  accountType=" ";
	  accountbalance=0.0;
	}	
	Bankaccount(string holder,int number,string type,double balance)// parametarized constructor
	{
		accountHolder=holder;
		accountNumber=number;
		accountType=type;
		accountbalance=balance;
	}
	string getAccountHolder()  //accessor 
	{
		return accountHolder;
	}
	int getAccountNumber() //accessor 
	{
		return accountNumber;
	}
	string AccountType() //accessor 
	{
		return accountType;
	}
	double Accountbalance() //accessor 
	{
		return accountbalance;
	}
	void setAccountType(string New) //mutators
	{
		accountType=New;
	}
	void deposit(double amount)
	{
		if(amount>0)
		{
			accountbalance+=amount;
			cout<<"Depositing amount"<<amount<<"\n"<<endl;
			cout<<"new Balance is:"<<accountbalance<<"\n"<<endl;
		}
		else{
			cout<<"Invalid deposit amount.\n"<<endl;
		}
	}
	void withdraw(double amount)
	{
		if(amount>0 && accountbalance>=amount)
		{
			accountbalance-=amount;
			cout<<"withdrawing amount"<<amount<<"\n"<<endl;
			cout<<"new balance is:"<<accountbalance<<"\n"<<endl;
		}
		else{
			cout<<"Insufficient balance.\n"<<endl;
		}
	}
	void displayAccountDetails()
	{
		cout<<"Account Details:"<<"\n"<<endl;
		cout<<"AcountHolder Name:"<<accountHolder<<"\n"<<endl;
		cout<<"AccountNumber :"<<accountNumber<<"\n"<<endl;
		cout<<"AccoutType:"<<accountType<<"\n"<<endl;
		cout<<"Balance:"<<accountbalance<<"\n"<<endl;
	}
};
int main()
{
	string holder,type;
	int number;
	double balance,deposit,withdraw;
	cout<<"Account Details:\n";
	cout<<"Enter account Holder name :";
	cin>>holder;
	cout<<"Enter account number:";
	cin>>number;
	cout<<"Enter account type(saving/current):";
	cin>>type;
	cout<<"Enter balance:";
	cin>>balance;
	
	//object
	Bankaccount account(holder,number,type,balance);
	
	//display details
	account.displayAccountDetails();
	
	cout<<"Enter Deposited Amount:";
	cin>>deposit;
	account.deposit(deposit);
	cout<<"Enter Withdraw Amount:";
	cin>>withdraw;
	account.withdraw(withdraw);
	cout<<"Enter New Account Type(saving/current):"; //update account type
	cin>>type;
	
	//display final details
	account.setAccountType(type);
	cout<<"Final Account Details:\n";
	account.displayAccountDetails();
	
	return 0;
}
