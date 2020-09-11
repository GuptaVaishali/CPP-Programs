#include<iostream>
#include<string.h>
using namespace std;

class bank
{
	private:
		char depositor_name[10];
		char acc_type[10];
		int balance;
		int years;
	public:
		int p;
		void login();
		void deposit();
		void calculate_balance();
		void show_info();
};
void bank::login()
{
	cout<<"Enter the name of customer "<<endl;
	cin.getline(depositor_name,10);
	do{
	cout<<"Enter the account type(savings/current) "<<endl;
	cin>>acc_type;
	}while(strcmp(acc_type,"savings") && strcmp(acc_type,"current")); 
	
//	while(acc_type!="savings" || acc_type!="current");
	cout<<"Enter the no of years "<<endl;
	cin>>years;
}
void bank::deposit()
{
//	balance=0;
	cout<<"Enter the amount to be deposited "<<endl;
	cin>>balance;
//	balance=amount;
}
/*void bank::calculate_balance()
{
	if(years>=5 && acc_type=="savings")
	{
		p=balance+(balance*9*years)/100;
	}
	else
	{
		if(acc_type=="savings")
		{
			p=balance+(balance*6*years)/100;
		}
		else
		{
			p=balance+(balance*4*years)/100;
		}
	}
}*/
void bank::calculate_balance()
{
	if(years<5)
	{
		if(acc_type=="savings")
		{
			p=balance+(balance*6*years)/100;
		}
		else
		{
			p=balance+(balance*4*years)/100;
		}
	}
	else
	{
			if(acc_type=="savings")
			{
				p=balance+(balance*9*years)/100;
			}
	}
}
void bank::show_info()
{
	cout<<"Depositor name: "<<depositor_name<<endl;
	cout<<"Account type: "<<acc_type<<endl;
	cout<<"Balance: "<<p<<endl;
}
int main()
{
	bank b1;
	b1.login();
	b1.deposit();
	b1.calculate_balance();
	b1.show_info();
	return 0;
}
