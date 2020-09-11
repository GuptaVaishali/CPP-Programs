#include<iostream>
using namespace std;

class student
{
	public:
	/*	void get()
		{
			cout<<"Enter name: "<<endl;
			cin>>name;
			cout<<"Enter rollno: "<<endl;
			cin>>rollno;
		}*/
		virtual void display()=0;
};
class engineering:public student
{
	public:
		void display()
		{
			cout<<"Engineering class"<<endl;
		}
};
class medicine:public student
{
	public:
		void display()
		{
			cout<<"medicine class"<<endl;
		}
};
class science:public student
{
	public:
	void display()
	{
		cout<<"science class"<<endl;
	}
};
int main()
{
	student *s[3];
	s[0]=new engineering();
	s[1]=new medicine();
	s[2]=new science();
	for(int i=0;i<3;i++)
	{
		s[i]->display();
	}
	return 0;
}

