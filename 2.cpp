#include <iostream>
using namespace std;
#include <cmath>

void area(float radius)
{
	float area;
	area=3.14*radius*radius;
	cout<<"The area of the given circle is : "<<area<<endl;
}

void area(int side)
{
	int area;
	area=side*side;
	cout<<"The area of the given square is : "<<area<<endl;
}


void area(int length,int breadth)
{
	int area;
	area=length*breadth;
	cout<<"The area of the given rectangle is : "<<area<<endl;
}

void area(int a,int b,int c)
{
	float area;
	float s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"The area of the given triangle is : "<<area<<endl;
}

void area(float base, float height)
{
    float area;
    area=base*height;
    cout<<"The area of the given parallelogram is : "<<area<<endl;
}

int main() {
	int choice,option;
	do{
	    cout<<"***********************************Welcome************************************";
		cout<<"\n\nYou can do the following: ";
		cout<<"\n\n1.Area of circle\n2.Area of square\n3.Area of rectangle\n4.Area of triangle\n5.Area of parallelogram\n6.Exit"<<endl;
		cout<<"\n\nWhat is your choice?"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				float radius;
				cout<<"\n\nEnter radius of circle\n";
				cin>>radius;
				area(radius);
				break;
				
			case 2:
				int side;
				cout<<"\n\nEnter side of square\n";
				cin>>side;
				area(side);
				break;
				
			case 3:
				int length,breadth;
				cout<<"\n\nEnter length & breadth of rectangle\n";
				cin>>length>>breadth;
				area(length, breadth);
				break;
				
			case 4:
				int a,b,c;
				cout<<"\n\nEnter sides of triangle\n";
				cin>>a>>b>>c;
				area(a, b, c);
				break;
			
			case 5:
				float base, height;
				cout<<"\n\nEnter height and base of parallelogram\n";
				cin>>height>>base;
				area(height, base);
				break;
			
			
			case 6:
				break;
	}
cout<<"*********************************Thank you!************************************";
	cout<<"\n\nDo you wish to continue?\n1.Continue\n2.Exit\n";
	cin>>option;

	}
	while(option == 1);
	
	
	return 0;
	
	
}

