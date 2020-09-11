#include<iostream>
using namespace std;

class A
{
	protected:
		int data1;
	public:
		void func1()
		{
			cout<<"Enter data1"<<endl;
			cin>>data1;
		}
};
class B:virtual public A
{
	protected:
		int data2;
	public:
		void func2()
		{
			cout<<"Enter data2 "<<endl;
			cin>>data2;
		}
};
class C:virtual public A
{
	protected:
		int data3;
	public:
		void func3()
		{
			cout<<"Enter data3"<<endl;
			cin>>data3;
		}
};
class D:public B,C
{
	protected:
		int data4;
	public:
		void func4()
		{
			C::func3();
			cout<<"Enter data4"<<endl;
			cin>>data4;
		}
};
int main()
{
	D d;
	d.func1();
	d.func2();
	d.func4();
	return 0;
}
