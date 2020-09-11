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
	/*	class full
		{};
		class empty
		{};*/
		stack()
		{
			top=-1;
		}
		void push(T x)
		{
			if(top>=size-1)
			{
				 cout<<"full"<<endl;
			}
			top++;
			a[top]=x;
		}
		T pop()
		{
			if(top<0)
			{
				cout<<"empty"<<endl;
			}
			T x=a[top];
			top--;
			return x;
		}
};
int main()
{
	stack <int>s;
	s.push(30);
	s.push(40);
	cout<<"1."<<s.pop()<<endl;
	cout<<"2."<<s.pop()<<endl;
	
	stack<float> s1;
	s1.push(30.78);
	s1.push(40.90);
	cout<<"1."<<s1.pop()<<endl;
	cout<<"2."<<s1.pop()<<endl;
	return 0;
}
