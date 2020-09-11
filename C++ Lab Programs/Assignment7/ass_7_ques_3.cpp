#include<iostream>
using namespace std;

template<class T>
void bubblesort(T *a,int n)
{
	for(int i=1;i<=n-1;i++)
	{
		bool issorted=true;
		for(int j=0;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				T temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				issorted=false;
			}
		}
		if(issorted==true)
		break;
	}
}

int main()
{
//	int *a;
	int n;
	cout<<"Enter number of elements in array"<<endl;
	cin>>n;
	
	float *b;
	b=new float[n];
//	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" Element"<<endl;
		cin>>b[i];
	}
	bubblesort(b,n);
	cout<<"sorted array is:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<endl;
	}
	return 0;
}

