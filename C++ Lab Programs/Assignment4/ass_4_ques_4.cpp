#include<iostream>
using namespace std;
class derv;
class base
{
	private:
		int data1;
	public:
		base():data1(5)
		{ }
		void base_func(derv d)
		{
			cout<<"data2= "<<d.data2<<endl;
		}
};
class derv:public base
{
	private:
		int data2;
	public:
/*		void derv_func(base a)
		{
			cout<<"data1="<<a.data1<<endl;
		}*/
		derv():data2(6)
		{ }
		friend base;
};
int main()
{
	base a;
	derv d;
	a.base_func(d);
	return 0;
}
