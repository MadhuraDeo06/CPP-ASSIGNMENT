/*
 * main.cpp
 *
 *  Created on: 05-Mar-2020
 *      Author: madhura
 */



#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
enum menu
{
	EXIT,ACCEPT_RECORD,PRINT_RECORD,SEARCH_STUDENT,SORT_RECORD
};
enum subMenu
{
	EXIT1,SORT_BY_NAME, SORT_BY_ROLLNO,SORT_BY_PERCENTAGE
};
class Student
{
private:
	char name[30];
	char gender;
	int rollNumber;
	int marks1;
	int marks2;
	int marks3;
public:

	Student()
	{
		this->gender=' ';
		this->rollNumber=0;
		this->marks1=0;
		this->marks2=0;
		this->marks3=0;
	}


	void setGender(char gender)
	{
		this->gender=gender;
	}
	void setRollNo(int rollno)
	{
		this->rollNumber=rollno;
	}
	void setMarks1(int marks)
	{
		this->marks1=marks;
	}
	void setMarks2(int marks)
	{
		this->marks2=marks;
	}
	void setMarks3(int marks)
	{
		this->marks3=marks;
	}
	const char* getName(void)const
	{
		return name;
	}
	char getGender(void)const
	{
		return this->gender;
	}
	int getRollNo(void)const
	{
		return this->rollNumber;
	}
	int getMarks1(void) const
	{
		return this->marks1;
	}
	int getMarks2(void) const
	{
		return this->marks2;
	}
	int getMarks3(void) const
	{
		return this->marks3;
	}
	void accept_Record(void)
	{
		cout<<"Enter Name :: "<<endl;
		cin>>this->name;

		char gen;
		cout<<"Enter Gender :: "<<endl;
		cin>>gen;
		this->setGender(gen);

		int rollNo;
		cout<<"Enter RollNo :: "<<endl;
		cin>>rollNo;
		this->setRollNo(rollNo);


		cout<<"Enter marks for subject 1 "<<endl;
		cin>>this->marks1;
		cout<<"Enter marks for subject 2 "<<endl;
		cin>>this->marks2;
		cout<<"Enter marks for subject 3 "<<endl;
		cin>>this->marks3;
	}
	void print_Record(void)
	{
		cout<<" Name :: "<<this->name<<endl;
		cout<<" Gender :: "<<this->gender<<endl;
		cout<<" RollNo :: "<<this->rollNumber<<endl;
		cout<<" Marks  ::"<<this->marks1<<"		"<<this->marks2<<"	"<<this->marks3<<endl;
		float per = (float)(( this->getMarks1() + this->getMarks2() + this->getMarks3() ) / 3) ;
		cout<<"PERCENTAGE IS :"<<per<<endl;
	}
	double percentage(void)
	{
		double total=0, percent;
		total = total + this->marks1;
		total = total + this->marks2;
		total = total + this->marks3;

		return percent = (total / 3);
	}
	double getper(void)
	{
		return this->percentage();
	}

};
int search(Student *temp, int rollno )
{
	if(rollno==temp->getRollNo())
		return 1;
	else
		return 0;
}
int Compare_by_name(const void *s1, const void *s2)
{
	const Student* rollno1 = (Student*) s1;
	const Student* rollno2 = (Student*) s2;

	const char* name1 = rollno1->getName();
	const char* name2 = rollno2->getName();
	return strcmp(name1,name2);
}
int compare_by_percentage(const void *s1, const void *s2)
{
	Student* rollno1 = (Student*) s1;
	Student* rollno2 = (Student*) s2;

	int per1 = (int)rollno1->getper();
	int per2 = (int)rollno2->getper();
	return per1>per2;
}
int compare_by_rollno(const void *s1, const void *s2)
{
	Student* rollno1 = (Student*) s1;
	Student* rollno2 = (Student*) s2;

	int RN1 = rollno1->getRollNo();
	int RN2 = rollno2->getRollNo();
	return RN1>RN2;
}
int menuList(void)
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Accept_record"<<endl;
	cout<<"2.Print Record"<<endl;
	cout<<"3.Search Student In Record"<<endl;
	cout<<"4.Sort Record"<<endl;
	cout<<"Enter choice"<<endl;
	cin>>choice;
	return choice;
}
int sub_menuList(void)
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Sort By Name"<<endl;
	cout<<"2.Sort By rollNo"<<endl;
	cout<<"3.Sort By Percentage"<<endl;
	cout<<"Enter choice"<<endl;
	cin>>choice;
	return choice;
}
int main(void)
{
	int rollno,value;
	Student s[3];
	int choice;
	while((choice=menuList())!=0)
	{
		switch(choice)
		{
		case ACCEPT_RECORD:
			for(int i=0; i<3; i++)
				s[i].accept_Record();
			break;

		case PRINT_RECORD:
			for(int i=0; i<3; i++)
				s[i].print_Record();
			break;

		case SEARCH_STUDENT:
			cout<<"Enter rollNo of student to search "<<endl;
			cin>>rollno;
			for(int i=0;i<3;i++)
			{
				value=::search(&s[i],rollno);
				if(value==1)
				{
					cout<<"Record Found"<<endl;
					s[i].print_Record();
				}
				else
					cout<<"Record Not Found"<<endl;
			}

			break;

		case SORT_RECORD:
			while((choice=sub_menuList())!=0)
			{
				switch(choice)
				{
				case SORT_BY_NAME:
					qsort(s,3,sizeof(Student),Compare_by_name);
					cout<<"After sorting :: "<<endl;
					for(int i=0; i<3; i++)
						s[i].print_Record();
					break;
				case SORT_BY_ROLLNO:
					qsort(s,3,sizeof(Student),compare_by_rollno);
					cout<<"After sorting :: "<<endl;
					for(int i=0; i<3; i++)
						s[i].print_Record();
					break;
				case SORT_BY_PERCENTAGE:
					qsort(s,3,sizeof(Student),compare_by_percentage);
					cout<<"After sorting :: "<<endl;
					for(int i=0; i<3; i++)
						s[i].print_Record();
				}
			}
		}
	}
}
