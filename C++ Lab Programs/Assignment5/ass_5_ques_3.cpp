#include<iostream>
using namespace std;

class shape
{
	protected:
		int a;
	public:
		virtual	void area()
		{
		}
		virtual void display()
		{
		}
};
class circle:public shape
{
	private:
		int radius;
	public:
		void area()
		{
			cout<<"Enter radius: "<<endl;
			cin>>radius;
			 a=3.14*radius*radius;
			
		}
		void display()
		{
			cout<<"area of circle: "<<a<<endl;
			cout<<"shape is circle"<<endl;
		}
};
class rectangle:public shape
{
	private:
		int width,height;
	public:
		void area()
		{
			cout<<"Enter width and height: "<<endl;
			cin>>width>>height;
			a=width*height;
			
		}
		void display()
		{
			cout<<"area of rectangle: "<<a<<endl;
			cout<<"shape is rectangle"<<endl;
		}
};
class trapezoid:public shape
{
	private:
		int b,c,h;
	public:
		void area()
		{
			cout<<"Enter a, b,h: "<<endl;
			cin>>b>>c>>h;
			a=((a+b)*h)/2;
		}
		void display()
		{
			cout<<"area of trapezoid: "<<a<<endl;
			cout<<"shape is trapezoid"<<endl;
		}
};
int main()
{
	shape *s;
	rectangle r;
	circle c;
	trapezoid t;
	s=&r;
	s->area();
	s->display();
	s=&c;
	s->area();
	s->display();
	s=&t;
	s->area();
	s->display();
	return 0;
}
