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
	printf("\n Date = %d/%d/%d",date->day,date->month, date->year);
}
void acceptDateOnConsole(struct day *date)
{
	printf("\n Enter Date");
	scanf("%d%d%d",&date->day,&date->month,&date->year);
}
int menu_choice()
{
	int choice;
	printf("\n 0.Exit");
	printf("\n 1.initialze date");
	printf("\n 2.Print Date On Console");
	printf("\n 3.Accept Date From Console");
	printf("\n Enter choice ");
	scanf("%d",&choice);
	return choice;
}
int main(void)
{
	struct day date;
	int choice;
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
		}
	}
	return 0;
}
