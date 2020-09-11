#include<iostream>
using namespace std;

class staff
{
	protected:
	int code;
	char name[10];
	public:
		void input()
		{
			cout<<"code:"<<endl;
			cin>>code;
			cout<<"name:"<<endl;
			cin>>name;
		}
		void output()
		{
			cout<<"code:"<<code<<endl;
			cout<<"name:"<<name<<endl;
		}
};
class faculty:public staff
{
	private:
		char department[10];
		char sub_taken[10];
		char research_area[10];
	public:
		void input()
		{
			staff::input();
			cout<<"Enter department name: "<<endl;
			cin>>department;
			cout<<"Enter sub_taken"<<endl;
			cin>>sub_taken;
			cout<<"Enter research area"<<endl;
			cin>>research_area;
		}
		void output()
		{
			staff::output();
			cout<<"department:"<<department<<endl;
			cout<<"sub_taken: "<<sub_taken<<endl;
			cout<<"Enter research area:"<<research_area;
		}
};
class typist:public staff
{
	private:
		char office[10];
		int speed;
	public:
		void input()
		{
			cout<<"Enter office:"<<endl;
			cin>>office;
			cout<<"Enter speed: "<<endl;
			cin>>speed;
		}
		void output()
		{
			cout<<"office name: "<<office<<endl;
			cout<<"speed: "<<speed<<endl;
		}
		
};
class officer:public staff
{
	private:
		char rank[10];
		char grade[10];
	public:
		void input()
		{
			cout<<"Enter rank: "<<endl;
			cin>>rank;
			cout<<"enter grade:"<<endl;
			cin>>grade;
		}
		void output()
		{
			cout<<"rank:"<<rank<<endl;
			cout<<"grade: "<<grade<<endl;
		}
};
class permanent:public typist
{
	private:
		int salary;
	public:
		void input()
		{
			typist::input();
			cout<<"salary";
			cin>>salary;
		}
		void output()
		{
			typist::output();
			cout<<"salary"<<salary<<endl;
		}
};
class casual:public typist
{
	private:
		int daily_wages;
	public:
		void input()
		{
			cout<<"Enter daily-wages:"<<endl;
			cin>>daily_wages;
		}
		void output()
		{
			cout<<"daily_wages: "<<daily_wages<<endl;
		}
};
int main()
{
	casual c;
	permanent p;
	faculty f;
	officer o;
	f.input();
	o.input();
	p.input();
	c.input();
	f.output();
	o.output();
	p.output();
	c.output();
	return 0;
}
