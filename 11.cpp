#include<iostream>
using namespace std;

class class_2;	

class class_1
{
	int value1;
	
	public:
		void getvalue1()
		{
		    cout<<"\n\nEnter the value of private data member for class_1"<<endl;
		    cin>>value1;
		}
		void display(void){cout << value1 << "\n";}
		friend void exchange(class_1 &, class_2 &);
};

class class_2
{
	int value2;
	
	public:
		void getvalue2()
		{
		    cout<<"\nEnter value of private data member for class_2"<<endl;
		    cin>>value2;
		}
		void display(void){cout << value2 << "\n";}
		friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 &x, class_2 &y)
{
	int temp = x.value1;
	x.value1 = y.value2;
	y.value2 = temp;
}

int main()
{
        cout<<"\n\n______________________________________________________________________________";
	class_1 C1;
	class_2 C2;
	
	C1.getvalue1();	
	C2.getvalue2();
	
	cout<<"\n\nValues Before Exchanging" << "\n";
	C1.display();
	C2.display();
	
	exchange(C1, C2);
	
	cout<<"\nValues After Exchanging" << "\n";
	C1.display();
	C2.display();	
cout<<"\n\n______________________________________________________________________________"<<endl;
		
	return 0;
}



