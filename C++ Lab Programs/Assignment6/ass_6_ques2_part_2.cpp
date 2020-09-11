#include<iostream>
using namespace std;
const int SIZE=3;
class queue
{
	private:
		int a[SIZE];
		int r,f;
	public:
		class full{
		};
		class empty{
		};
		queue()
		{
			r=f=-1;
		}
		void insert(int val)
		{
			if(r==SIZE-1)
			{
				throw full();
			}
			if(r==-1)
			{
				f=r=0;
			}
			else
			{
				r=r+1;
			}
			a[r]=val;
		}
		int del()
		{
			int val=a[f];
			if(f==-1)
			{
				throw empty();
			}
			if(r==f)
			{
				r=f=-1;
			}
			else
				f=f+1;
			return val;
		}
};
int main()
{
	queue q;
	try
	{
		q.insert(10);
		q.insert(40);
		q.insert(60);
		q.insert(70);
}
	catch(queue::full)
	{
		cout<<"queue is full"<<endl;
	}
try{
		cout<<"1."<<q.del()<<endl;
		cout<<"2."<<q.del()<<endl;
		cout<<"3."<<q.del()<<endl;
		cout<<"4."<<q.del()<<endl;
	}
	catch(queue::empty)
	{
		cout<<"queue is empty"<<endl;
	}
	return 0;
}

