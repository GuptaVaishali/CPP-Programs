#include<iostream>
using namespace std;

template<class T1,class T2,class T3>
void find_largest(T1 a,T2 b,T3 c)
{
	cout<<"largest number is "<<((a>b)?((a>c)?a:c):((b>c)?b:c));
}
int main()
{
	int a;float b;
	long c;
	cout<<"Enter three integers numbers"<<endl;
	cin>>a>>b>>c;
	find_largest(a,b,c);
	return 0;
}
