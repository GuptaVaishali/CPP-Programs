#include<iostream>
using namespace std;

class base1
{
	private:
		int data1;
	protected:
		int data2;
	public:
		int data3;
};
class base2
{
	private:
		int data4;
	protected:
		int data5;
	public:
		int data6;
		friend base1;
};
class derived:public base1,base2
{
	public:
	void display()
	{
		data1; //private data member can not access
		data2;
		data3;
		data4;//private data member can not access
		data5;
		data6;
	}
};
int main()
{
	derived d;
	d.display();
	return 0;
}
