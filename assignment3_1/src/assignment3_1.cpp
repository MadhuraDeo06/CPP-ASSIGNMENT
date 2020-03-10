#include<iostream>
using namespace std;

enum menuList
{
	EXIT, ACCEPT_TIME, PRINT_TIME
};
class InvalidTimeException
{
private:
	string message;
public:
	InvalidTimeException(string message): message(message)
	{	}
	string getMessage(void)const
	{
		return this->message;
	}
};
class Time
{
private:
	int hour;
	int minutes;
	int seconds;
public:
	Time():hour(0),minutes(0),seconds(0)
	{	}
	Time(int hour,int minutes, int seconds):hour(hour),minutes(minutes),seconds(seconds)
	{	}
	int getHour(void)const throw()
	{
		return this->hour;
	}
	int getMinutes(void)const throw()
	{
		return this->minutes;
	}
	int getSeconds(void)const throw()
	{
		return this->seconds;
	}
	void printTime(void)const throw()
	{
		cout<<this->hour<<":"<<this->minutes<<":"<<this->seconds<<endl;
	}
	void setHour(int &hour)throw(InvalidTimeException)
	{
		if(hour<=24 && hour>0)
			this->hour = hour;
		else
			throw InvalidTimeException("Invalid value");

	}
	void setMinutes(int &minutes)throw(InvalidTimeException)
	{
		if(minutes>=60 && minutes<0)
			this->minutes = minutes;
		else
			throw InvalidTimeException("Invalid value");
	}
	void setSeconds(int &seconds)throw(InvalidTimeException)
	{
		if(seconds>=60 && seconds<0)
			this->seconds = seconds;
		else
			throw InvalidTimeException("Invalid value");
	}
};
void accept_Record(Time *time, int size)
{
	for(int i=0;i<size;i++)
	{
		int hour, minutes, seconds;
		cout<<"enter hour :: "<<endl;
		cin>>hour;
		time[i].setHour(hour);

		cout<<"enter minutes :: "<<endl;
		cin>>minutes;
		time[i].setMinutes(minutes);

		cout<<"enter seconds :: "<<endl;
		cin>>seconds;
		time[i].setSeconds(seconds);
	}
}
/*void print_Record(Time *time, int size)
{
	for(int i=0;i<size;i++)
	{
		int hour, minutes, seconds;
		cout<<"hour :: "<<time[i].getHour()<<endl;

		cout<<"minutes :: "<<time[i].getMinutes()<<endl;

		cout<<"seconds :: "<<time[i].getSeconds()<<endl;
	}
}*/
int menu_list()
{
	int choice;
	cout<<"0.EXIT "<<endl;
	cout<<"1.Accept Time"<<endl;
	cout<<"2.Print Time"<<endl;
	cout<<"Enter Choice"<<endl;
	cin>>choice;
	return choice;
}


int main(void)
{
	int size,choice;
	cout<<"Enter size of array :: "<<endl;
	cin>>size;

	try
	{
		Time *time = new Time[size];
		while((choice=menu_list())!=0)
		{
			switch(choice)
			{
			case ACCEPT_TIME:
				accept_Record(time, size);
				break;
			case PRINT_TIME:
				int i;
				for(i=0;i<size;i++)
				{
					time[i].printTime();
				}
				break;
			}
		}
	}
	catch(InvalidTimeException &ex)
	{
		cout<<ex.getMessage()<<endl;
	}

	return 0;
}


