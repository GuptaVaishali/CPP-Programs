#include<iostream>
using namespace std;
const int size=5;
class stack
{
	private:
		int a[size];
		int top;
	public:
		class full
		{};
		class empty
		{};
		stack()
		{
			top=-1;
		}
		void push(int x)
		{
			if(top>=size-1)
			{
				throw full();
			}
			top++;
			a[top]=x;
		}
		int pop()
		{
			if(top<0)
			{
				throw empty();
			}	
			int x=a[top];
			top--;
			return x;
		}
};
int main()
{
	stack s;
	try{

	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	s.push(80);
}
catch(stack::full)
	{
		cout<<"stack is full"<<endl;
	}
try
{
	cout<<"1."<<s.pop()<<endl;
	cout<<"2."<<s.pop()<<endl;
	cout<<"3."<<s.pop()<<endl;
	cout<<"4."<<s.pop()<<endl;
	cout<<"5."<<s.pop()<<endl;
	cout<<"6."<<s.pop()<<endl;
	cout<<"7."<<s.pop()<<endl;
    }
	
	catch(stack::empty)
	{
		cout<<"Stack is empty"<<endl;
	}
	return 0;
}
