#include<iostream>
using namespace std;

class minimum
{
	private:
		int a,b,c;
	public:
		minimum()
		{
			
		}
		minimum(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		void input()
		{
			cout<<"Enter three integers numbers"<<endl;
			cin>>a>>b>>c;
		}
		void find_min()
		{
			cout<<"smallest number is: "<<((a<b)?((a<c)?a:c):((b<c)?b:c));
		}
};
int main()
{
	minimum m(4,6,5);
	minimum m1;
	m1.input();
	m1.find_min();
	return 0;
}
