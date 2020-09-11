#include<iostream>
using namespace std;

class student
{
	private:
		int rollno;
		char name[10],course[10];
	public:
		void input_student();
		void display_student();
};
void student::input_student()
{
	cout<<"Enter Rollno: ";
	cin>>rollno;
	cout<<"Name: ";
	cin>>name;
	cout<<"course: ";
	cin>>course;
}
void student::display_student()
{
	cout<<"Rollno: "<<rollno<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"course: "<<course<<endl;
}
class exam:private student
{
	private:
		int mark1,mark2,mark3;
	public:
		void input_student1()
		{
			input_student();
		}
		void display_student1()
		{
			display_student();
		}
		void input_marks();
		void display_result();
};
void exam::input_marks()
{
	cout<<"Enter marks1: "<<endl;
	cin>>mark1;
	cout<<"Enter marks2: "<<endl;
	cin>>mark2;
	cout<<"Enter marks3: "<<endl;
	cin>>mark3;
}
void exam::display_result()
{
	cout<<"marks1: "<<mark1<<endl;
	cout<<"marks2: "<<mark2<<endl;
	cout<<"marks3: "<<mark3<<endl;
	int total_marks;
	total_marks=mark1+mark2+mark3;
	cout<<"total_marks: "<<total_marks<<endl;
	int per=total_marks/3;
	cout<<"percentage: "<<per<<endl;
}
int main()
{
	exam ob[5];
	for(int i=0;i<5;i++)
	{
		ob[i].input_student1();
		ob[i].input_marks();
		ob[i].display_student1();
		ob[i].display_result();
	}
}
