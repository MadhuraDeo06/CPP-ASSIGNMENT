/*
 * main.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: madhura
 */

#include<iostream>
#include<cstring>
using namespace std;
class PasswordMismatchException
{

};
class PasswordMismatch
{
private:
	string name;
	string password;
	int id;
public:
	PasswordMismatch()
	{
		this->name="";
		this->password="";
		this->id=0;
	}
	PasswordMismatch(char name,char password,int id)
	{
		this->name=name;
		this->password=password;
		this->id=id;
	}
	void setName(char *name)
	{
		this->name=name;
	}
	void setPassword(char *password)
	{
		this->password=password;
	}
	void setId(int id)
	{
		this->id=id;
	}
	string getName(void)throw()
	{
		return this->name;
	}
	string getPassword(void)
	{
		return this->password;
	}
	int getId(void) const throw()
	{
		return this->id;
	}
};
void accept_User(PasswordMismatch &pass)
{
	char name[20];
	char password[30];
	int id;

	cout<<"Enter Name :: "<<endl;
	cin>>name;
	pass.setName(name);

	cout<<"Enter password :: "<<endl;
	cin>>password;
	pass.setPassword(password);

	cout<<"Enter Id :: "<<endl;
	cin>>id;
	pass.setId(id);

}
void check_Valid_User(PasswordMismatch &pass)throw(string)
{
	char password[30];
	int id;

	cout<<"Enter Id :: "<<endl;
	cin>>id;

	if(id==pass.getId())
			cout<<"Valid User Id "<<endl;
	else
		throw string("Invalid Id");

	cout<<"Enter Password :: "<<endl;
	cin>>password;

	if(password==pass.getPassword())
		cout<<"Valid User  "<<endl;
	else
		throw string("Invalid password");
}
int main(void)
{
	PasswordMismatch pass;
	try
	{
		cout<<"Create user :: "<<endl;
		accept_User(pass);

		cout<<endl;
		cout<<"Select User :: "<<endl;

		check_Valid_User(pass);
	}
	catch(string &ex)
	{
		cout<<ex<<endl;
	}

	return 0;
}
