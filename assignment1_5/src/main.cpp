#include<iostream>
#include<cstdio>
using namespace std;

class TollBooth
{
private:
	size_t carPayCount;
	size_t carNoPayCount;
	size_t carCount;
	double amount;
public:
	TollBooth()
	{
		this->carPayCount = 0;
		this->carNoPayCount =0;
		this->amount = 0;
		this->carCount = 0;
	}
	void payingCar()
	{
		this->amount = this->amount + 0.50;
		this->carPayCount++;
		carCount = carPayCount + carNoPayCount;
	}
	void noPayingCar()
	{
		this->carNoPayCount++;
		carCount = carPayCount + carNoPayCount;
	}
	void printOnConsole()
	{
		cout<<"Total car Count :: "<<carCount<<endl;
		cout<<"Paid car Count :: "<<carPayCount<<endl;
		cout<<"No Paid car Count :: "<<carNoPayCount<<endl;
		cout<<"Amount Received :: "<<amount<<endl;
	}
};
int menu_choice()
{
	int choice;
	cout<<"\n 0.Exit"<<endl;
	cout<<"1. Paying car"<<endl;
	cout<<"2. Non-Paying car"<<endl;
	cout<<"3. Display count"<<endl;
	cout<<"Enter Choice"<<endl;
	cin>>choice;
	return choice;
}
int main(void)
{
	TollBooth toll1;
	int choice;
	while((choice = ::menu_choice()) != 0)
	{
		switch(choice)
		{
		case 1: toll1.payingCar();
			break;
		case 2: toll1.noPayingCar();
			break;
		case 3: toll1.printOnConsole();
			break;
		}
	}

	return 0;
}
