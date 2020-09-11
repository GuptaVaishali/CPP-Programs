#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class student
{
	protected:
		char name[10];
		int roll;
	public:
		void get()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter rollno:";
			cin>>roll;
		}
		void display()
		{
			cout<<name<<endl;
			cout<<roll<<endl;
		}
};
class mark:public student
{
	protected:
		int mark1,mark2;
	public:
		void get()
		{	
			cout<<"Enter marks1 in english in (50):";
			cin>>mark1;
			cout<<"Enter marks in maths in (50):";
			cin>>mark2;
		}
		void display()
		{
			cout<<"marks1:"<<mark1<<endl;
			cout<<"marks2:"<<mark2<<endl;
		}
};
class result:public mark
{
	private:
		int total;
	public:
		void get()
		{
			student::get();
			mark::get();
		}
		void cal_result()
		{
			total=mark1+mark2;
		}
		
		void display_result()
		{
			string status=(total>40)?"PASSED":"FAILED";
			cout<<status<<endl;
			cout<<"NAME"<<setw(13)<<"ROll"<<setw(8)<<"ENGLISH"<<setw(8)<<"MATHS"<<setw(8)<<"Result"<<endl;
			for(int i=0;i<41;i++)
				cout<<"-";
			cout<<endl;
			cout<<name<<setw(8)<<roll<<setw(8)<<mark1<<setw(8)<<mark2<<setw(8)<<status<<endl;
		}
};
int main()
{
	/*int n;
	cout<<"how many students:"<<endl;
	cin>>n;*/
	result r;
//	for(int i=0;i<n;i++)
//	{
		r.get();
//		r.get_marks();
		r.display_result();
//	}
	return 0;
}

