#include<iostream>
using namespace std;

class count
{
	protected:
	int c;
	public:
	count():c()
	{
	}
	count(int a):c(a)
	{
	}
	int getcount()
	{
		return c;
	}
/*	count operator ++()
	{
		count c;
		++c;
		return c;
	}*/
	void operator ++()
	{
	//	count c;
		++c;
	//	return c;
	}
};
class counter:public count
{
	public:
	counter():count()
	{
	}
	counter(int a):count(a)
	{
	}
	void operator --()
	{
		//counter c;
		--c;
		//return c;
	}
};
int main()
{
	counter count,count1(5);
	++count;
	++count;
	++count1;
	cout<<"value of count:"<<count.getcount()<<endl;
	cout<<"value of count1:"<<count1.getcount()<<endl;
	--count;
	--count1;
	cout<<"value of count:"<<count.getcount()<<endl;
	cout<<"value of count1:"<<count1.getcount()<<endl;
	return 0;
}
