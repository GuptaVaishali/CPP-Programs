#include<iostream>
#include<string.h>
using namespace std;

class user
{
	protected:
		char name[10];
		int age;
	public:
		user(char name1[],int a)
		{
			strcpy(name,name1);
			age=a;
		}
};
class student:public user
{
	private:
		char course[10];
		int rollno;
		int marks;
	public:
		student(char c[],int r,int m,char name1[],int a):user(name1[10],a)
		{
			strcpy(course,c);
			rollno=r;
			marks=m;
		}
		void display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"course: "<<course<<endl;
			cout<<"rollno: "<<rollno<<endl;
			cout<<"marks: "<<marks<<endl;
		}
};
class teacher:public user
{
	private:
	char sub_assigned[10];
	int contact_hour;
	public:
		teacher(char name1[],int a,char sub[],int hour):user(name1[10],a)
		{
			strcpy(sub_assigned,sub);
			contact_hour=hour;
		}
		void display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"age: "<<age<<endl;
			cout<<"sub_assigned:"<<sub_assigned<<endl;
			cout<<"contact_hour:"<<contact_hour<<endl;
		}
};
int main()
{
	teacher t;
	student s;
	s.display();
}
