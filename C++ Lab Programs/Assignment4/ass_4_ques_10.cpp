#include<iostream>
using namespace std;

class university
{
	private:
		char uni_name[10];
		char dep_name[10];
		char per_name[10];
	public:
		void input()
		{
			cout<<"Enter the university name"<<endl;
			cin>>uni_name;
			cout<<"Enter the department name assigned"<<endl;
			cin>>dep_name;
			cout<<"Enter the person name"<<endl;
			cin>>per_name;
		}
		void display()
		{
			cout<<"university_name: "<<uni_name<<endl;
			cout<<"department_name: "<<dep_name<<endl;
			cout<<"person_name: "<<per_name<<endl;
		}
};
class company
{
	private:
		char comp_name[10];
		int num_eng;
		int amount_invested;
	public:
		void get()
		{
			cout<<"Enter company name: "<<endl;
			cin>>comp_name;
			cout<<"Enter number of engineers assigned: "<<endl;
			cin>>num_eng;
			cout<<"Enter amount invested to do project: "<<endl;
			cin>>amount_invested;
		}
		void display()
		{
			cout<<"company name: "<<comp_name<<endl;
			cout<<"number of engineers assigned: "<<endl;
	//		cout<<"amount invested: "<<amount_invested<<endl;
		}
};
class project:public university,company
{
	private:
		char type_project[10];
		int duration;
		int amount_granted;
	public:
		void input()
		{
			university::input();
			company::get();
			cout<<"Enter type of project:"<<endl;
			cin>>type_project;
			cout<<"Enter duration of project:"<<endl;
			cin>>duration;
			cout<<"Enter amount granted to complete project:"<<endl;
			cin>>amount_granted;
		}
		void display()
		{
			university::display();
			company::display();
			cout<<"type of project:"<<type_project<<endl;
			cout<<"duration of project:"<<duration<<endl;
			cout<<"amount granted: "<<amount_granted<<endl;
		}
};
int main()
{
		project p;
		p.input();
		p.display();
		return 0;
}
