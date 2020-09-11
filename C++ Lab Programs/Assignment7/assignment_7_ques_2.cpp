#include<iostream>
using namespace std;
const int size=5;
template<class T>
class stack
{
	private:
		T a[size];
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
		void push(T x)
		{
			if(top>=size-1)
			{
				throw full();
			}
			top++;
			a[top]=x;
		}
		T pop()
		{
			if(top<0)
			{
				throw empty();
			}	
			T x=a[top];
			top--;
			return x;
		}
};
int main()
{
	stack <int>s;
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
    }
	
	catch(stack::empty)
	{
		cout<<"Stack is empty"<<endl;
	}
	return 0;
}
