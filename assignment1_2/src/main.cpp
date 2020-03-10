#include<iostream>
#include<cstdio>
using namespace std;
struct day
{
	int day;
	int month;
	int year;
};
void initDate(struct day *date)
{
	date->day=04;
	date->month=03;
	date->year=2020;
}
void printDateOnConsole(struct day *date)
{
	cout<<date->day<<"/"<<date->month<<"/"<<date->year<<endl;
}
void acceptDateOnConsole(struct day *date)
{
	cout<<"\n Enter Date";
	cin>>date->day;
	cin>>date->month;
	cin>>date->year;
}
bool IsLeapYear(struct day *date)
{
	if((date->year % 4 == 0 && date->year % 100 !=0) || date->year % 400 ==0)
		printf("\n %d is leap year",date->year);
	else
		printf("\n %d is not leap year",date->year);
}
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
	struct day date;
	int choice;
	bool no;
	while((choice=menu_choice())!=0)
	{
		switch(choice)
		{
		case 1: initDate(&date);
			break;
		case 2: printDateOnConsole(&date);
			break;
		case 3: acceptDateOnConsole(&date);
			break;
		case 4: no = IsLeapYear(&date);
				//cout<<no;
			break;

		}
	}
	return 0;
}
