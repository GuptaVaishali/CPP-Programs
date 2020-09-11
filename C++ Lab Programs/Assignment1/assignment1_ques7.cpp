#include<iostream>
using namespace std;

class student
{
	int rollno,marks[3],total,average;
	string name;
	public:
		void getdata();
		void displaydata();
};
void student::getdata()
{
	cout<<"Enter student details: "<<endl;
	cout<<"Enter rollno: "<<endl;
	cin>>rollno;
	if(rollno<0)
	{
		cout<<"invalid value"<<endl;
		getdata();
	}
	else
	{
		cout<<"Enter name: "<<endl;
		cin>>name;
		cout<<"Enter marks in all subjects(marks range-0:100): "<<endl;
		for(int i=0;i<3;i++)
		{
			do{
				cout<<"Enter marks in subject "<<i+1<<endl;
				cin>>marks[i];
			}while(marks[i]<0 || marks[i]>100);
		}	
	}
}
void student::displaydata()
{
	cout<<"STUDENT DETAILS: "<<endl;
	cout<<"Rollno: "<<rollno<<endl;
	cout<<"Name: "<<name<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Marks in subject "<<i+1<<": "<<marks[i]<<endl;
	}
	int total=0;
	for(int i=0;i<3;i++)
	{
		total+=marks[i];
	}
	cout<<"Total Marks: "<<total<<endl;
	average=total/3;
	cout<<"Average: "<<average<<endl;
}
int main()
{
	int n;
	cout<<"Enter the number of students: "<<endl;
	cin>>n;
	student st[n];
	for(int i=0;i<n;i++)
	{
		st[i].getdata();
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		st[i].displaydata();
	}
	return 0;
}
