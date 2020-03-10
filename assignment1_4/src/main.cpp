#include<iostream>
#include<cstdio>
using namespace std;
class Date
{
private:
		int day;
		int month;
		int year;
public:
		Date()
		{
			this->day=04;
			this->month=03;
			this->year=2020;
		}
		Date (int day, int month, int year)
		{
			this->day = day;
			this->month = month;
			this->year = year;
		}
		void printDateOnConsole()
		{
			cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
		}
		void acceptDateOnConsole()
		{
			cout<<"\n Enter Date";
			cin>>this->day;
			cin>>this->month;
			cin>>this->year;
		}
		bool IsLeapYear()
		{
			if((this->year % 4 == 0 && this->year % 100 !=0) || this->year % 400 ==0)
				printf("\n %d is leap year",this->year);
			else
				printf("\n %d is not leap year",this->year);
		}

};
int menu_choice()
{
	int choice;
	cout<<"\n 0.Exit";
	cout<<"\n 1.initialze date";
	cout<<"\n 2.Print Date On Console";
	cout<<"\n 3.Accept Date From Console";
	cout<<"\n 4.Leap Year";
	cout<<"\n Enter choice ";
	cin>>choice;
	return choice;
}
int main(void)
{
	int choice;
	bool no;
	Date date1(06,04,1998);
	while((choice=menu_choice())!=0)
	{
		switch(choice)
		{
		case 1:
			break;
		case 2: date1.printDateOnConsole();
			break;
		case 3: date1.acceptDateOnConsole();
			break;
		case 4: date1.IsLeapYear();
				//cout<<no;
			break;

		}
	}
	return 0;
}
