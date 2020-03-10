/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#include<iostream>
using namespace std;

enum account_type
{
	SAVINGS=1,CURRENT,DMAT, DEPOSIT=1,WITHDRAWL
};
enum user
{
	CREATE_USER=1, TRANSACTION, DISPLAY
};
class InsufficientFunds
{
private:
	int id;
	double cur_Amt;
	double withdraw_Amt;

public:
	InsufficientFunds(int id, double cur_Amt, double withdraw_Amt)
	{
		this->id=id;
		this->cur_Amt=cur_Amt;
		this->withdraw_Amt=withdraw_Amt;
	}
	string &display(void)
	{
		cout<<"Invalid Transaction in Account :: "<<this->id<<endl;
		cout<<"Your Account Balance is ::"<<this->cur_Amt<<endl;
		cout<<"You are Trying to withdrawl :: "<<this->withdraw_Amt<<endl;
	}
};
class account
{
private:
	int id;
	enum account_type type;
	double amount;
public:
	account()
	{
		this->id=0;
		this->type=type;
		this->amount=0.0f;
	}
	account(int id,	account_type type,double amount)
	{
		this->id=id;
		this->type=type;
		this->amount=amount;
	}
	int acceptRecord(void)
	{
		int val;
		cout<<"Enter Account Id :: "<<endl;
		cin>>this->id;

		cout<<"Enter Account type :: "<<endl;
		cout<<" 1.SAVINGS \n 2.CURRENT \n 3.DMAT"<<endl;
		cin>>val;
		if(val==1)
			this->type=SAVINGS;
		else if(val==2)
			this->type=CURRENT;
		else if(val==3)
			this->type=DMAT;
		else
		{
			cout<<"enter valid account type"<<endl;
			return 0;
		}

		cout<<"Enter Balance In The Account :: "<<endl;
		cin>>this->amount;
		return 1;
	}
	void displayRecord(void)
	{
		cout<<"Account Number :: "<<this->id<<endl;

		cout<<"Account type :: ";
		int val=this->type;
		if(val==1)
			cout<<"SAVINGS"<<endl;
		if(val==2)
			cout<<"CURRENT"<<endl;
		if(val==3)
			cout<<"DMAT"<<endl;

		cout<<"Balance In The Account :: "<<this->amount<<endl;
	}
	void setId(int id)
	{
		this->id=id;
	}
	void setAccountType(account_type type)
	{
		this->type=type;
	}
	int getId(void)const
	{
		return this->id;
	}
	account_type getAccountType(void)const
	{
		return this->type;
	}
	double getAmount(void)const
	{
		return this->amount;
	}
	void depositAmount(double &amount)
	{
		if(amount>0)
			this->amount=this->amount+amount;
		else
			throw(1);
	}
	void withdrawAmount(double &amount)
	{
		if(amount<0 || amount>this->amount)
			throw InsufficientFunds(this->id,this->amount,amount);
		else
			this->amount=this->amount-amount;
	}

};

int menuList(void)
{
	int choice;
	cout<<"1.Create User "<<endl;
	cout<<"2.Transaction "<<endl;
	cout<<"3.Display Account Information"<<endl;
	cout<<"Enter Choice :: "<<endl;
	cin>>choice;
	return choice;
}
int subMenuList(void)
{
	int choice;
	cout<<"1.Deposit "<<endl;
	cout<<"2.Withdrawl "<<endl;
	cout<<"Enter Choice :: "<<endl;
	cin>>choice;
	return choice;
}
int main(void)
{
	int temp;
	account acc;
	int choice;
	double amt;
	while((choice=menuList())!=0)
	{
		switch(choice)
		{
		case CREATE_USER:
			temp=acc.acceptRecord();
			if(temp==0)
				cout<<"User Is Not Created "<<endl;
			if(temp==1)
				cout<<"User Is Successfully Created"<<endl;
			break;

		case TRANSACTION:
			while((choice=subMenuList())!=0)
			{
				switch(choice)
				{
				case DEPOSIT:
					cout<<"Enter Amount to be Deposited :: ";
					cin>>amt;
					try
					{
						acc.depositAmount(amt);
					}
					catch(int i)
					{
						cout<<"Enter Valid Amount "<<endl;
					}
					break;

				case WITHDRAWL:
					cout<<"Enter Amount to be Withdrawl :: ";
					cin>>amt;
					try
					{
						acc.withdrawAmount(amt);
					}
					catch(InsufficientFunds funds)
					{
						funds.display();
					}
					break;


				}
			}
			break;

		case DISPLAY:
			acc.displayRecord();
			break;

		}
	}

	return 0;

}
