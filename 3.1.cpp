#include <iostream>
using namespace std;

class Shape
 {
protected:
	double d1, d2;
public:
	void get_data(double a, double b) 
        {
		d1 = a;
		d2 = b;
	}
	virtual void display_area() = 0;
};
class Triangle :public Shape {
	double Triangle;
public:
	void display_area() {
		Triangle = 0.5 * d1 * d2;
		cout << "Area of the Triangle : " << Triangle << endl;
	}
};
class Rectangle :public Shape {
	double Rectangle;
public:
	void display_area() {
		Rectangle = d1 * d2;
		cout << "Area of the Rectangle : " <<Rectangle << endl;
	}
};

int main() {
	int ch;
	{
cout<<"_________________________________WELCOME__________________________________"<<endl;
	        int choice;
		Shape* shapePointer;
		cout << "You can find the area of the following shapes\n1.Triangle\n2.Rectangle\n3.Quit" << endl;
cout<<"\n\nEnter your choice"<<endl;
		cin >> choice;
		switch (choice) {
		case 1:
			double base, height;
			cout <<"AREA OF TRIANGLE"<<endl;
                        cout << "Enter the base and height of Triangle" << endl;
			cin >> base >> height;
			shapePointer = new Triangle;
			shapePointer->get_data(base, height);
			shapePointer->display_area();
			break;
		case 2:
			double length, breadth;
                        cout <<"AREA OF RECTANGLE"<<endl;
			cout << "Enter the length and breadth of Rectangle" << endl;
			cin >> length >> breadth;
			shapePointer = new Rectangle;
			shapePointer->get_data(length, breadth);
			shapePointer->display_area();
			break;
		default:
			return 0;
		}
		cout << "\n\nDo you wish to continue?\n1.Continue\n2.Exit" << endl;
		cin >> ch;
	} while (ch == 1);
cout<<"______________________________________THANK YOU___________________________________"<<endl;
	return 0;
}
