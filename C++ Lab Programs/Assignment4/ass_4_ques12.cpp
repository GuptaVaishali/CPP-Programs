#include<iostream>
using namespace std;

class student
{
	protected:
		char name[10];
		int roll_no;
	public:
		void get_details()
		{
			cout<<"Enter details of student"<<endl;
			cout<<"Enter Name: "<<endl;
			cin>>name;
			cout<<"Enter Rollno:"<<endl;
			cin>>roll_no;
		}
		void display_details()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Rollno: "<<roll_no<<endl;
		}
};
class examination:virtual public student
{
	protected:
		int test1,test2;
	public:
		float avg;
		void cal_avg()
		{
			cout<<"Enter test1 marks"<<endl;
			cin>>test1;
			cout<<"Enter Test2 marks"<<endl;
			cin>>test2;
			avg=(test1+test2)/2;
		}
		void display_avg()
		{
			cout<<"average: "<<avg<<endl;
		}
};
class extra:virtual public student
{
	protected:
		int painting_mark;
		int music_mark;
	public:
		void get_score()
		{
			cout<<"enter painting marks: "<<endl;
			cin>>painting_mark;
			cout<<"Enter music marks: "<<endl;
			cin>>music_mark;
		}
		void display_total()
		{
			int total=painting_mark+music_mark;
			cout<<total<<endl;
		}
};
class result:public examination,extra
{
	private:
		int total;
	public:
		void cal_total()
		{
			student::get_details();
			examination::cal_avg();
			extra::get_score();
			total=test1+test2+painting_mark+music_mark;
			cout<<total;
		}
		void comment()
		{
			student::display_details();
			examination::display_avg();
			extra::display_total();
			string status=((total/4)>40)?"passed":"fail";
			cout<<status<<endl;
		}
};
int main()
{
	result r;
	r.cal_total();
	r.comment();
/*	r.get_details();
	r.cal_avg();
	r.display_avg();
	r.get_score();
	r.display_total();
	r.cal_total();
	r.display_details();
	r.comment();*/
	return 0;
}

