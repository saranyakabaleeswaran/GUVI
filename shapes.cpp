#include "iostream"
#include "conio.h"
using namespace std;
class measure
{
	public:
		void shape(int r);
		void shape(int l,int b);
		void shape(float t,int d,int e);
		
};
void measure::shape(int r)
{
	cout<<"area of the circle is "<<3.14*r*r;
}
void measure::shape(int l,int b)
{
	cout<<"area of the rectangle is"<<l*b;
}
void measure::shape(float t,int d,int e)
{
	cout<<"area of the triangle is"<<t*d*e;
}

int main()
{
	int r,d,e,l,b;
	float t;
  char ch;
	measure obj;
	
	cout<<"\n\n1. area of circle";
	cout<<"\n2. area of rectangle";
	cout<<"\n3. area of triangle";
	
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter the value of radius of the circle \n";
			cin>>r;
			obj.shape(r);
			break;
		case 2:
			cout<<"enter the sides of rectangle \n";
			cin>>l>>b;
			obj.shape(l,b);
			break;
		case 3:
			cout<<"enter the sides of triangle \n";
			cin>>d>>e;
			obj.shape(0.5,d,e);
			break;
		
		default:
			cout<<"\nThe choice entered is a wrong choice";
	}
	getch();
