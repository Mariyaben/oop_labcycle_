#include <iostream>
#include <cstring>

using namespace std;

class strng
{
	char *str;
	int length;
public:
	strng(){
		length=0;
		str=new char[length+1];
	}
	strng(const char *s)
	{
		length=strlen(s);
		str = new char[length+1];
		strcpy(str,s);
	}
        void CNT(void){count = 0;}
	void get(){cin>>str;}
	void display(){cout<<str<<endl;}
	void concatenate(strng a,strng b);
	void stlength();
	void compare(strng s1,strng S2);
};

void strng::concatenate(strng a,strng b)
{
	length=a.length+b.length;
	delete str;
	str=new char[length+1];
	strcpy(str,a.str);
	strcat(str,b.str);
}

void strng::stlength()
{
	cout<<strlen(str);
}

void strng::compare(strng s1, strng s2)
{
	int m,n;
	m=strlen(s1.str);
	n=strlen(s2.str);
        if(m==n)
                cout<<s1.str<<" is the same length as "<<s2.str<<"\n";
	else if(m<=n)
		cout<<s1.str<<" is smaller than "<<s2.str<<"\n";
	else
		cout<<s2.str<<" is smaller than "<<s1.str<<"\n";
}

int main()
{
	strng Str1, Str2, Str3;
cout<<"\n\n___________________________________________________________________________";
	cout<<"\nWelcome!!";

strng order;
order.CNT();
int x;
do
{
cout<<"-----------------------------------------------------------------------------------";
cout<<"\n You can do the following : ";
cout<<"\n 1. Add an item ";
cout<<"\n 2. Display total value ";
cout<<"\n 3. Delete an item ";
cout<<"\n 4. Display all item ";
cout<<"\n 5. Quit ";
cout<<"\n What is your Option: ";
cout<<"\n--------------------------------------------------------------------------------------";
cin>>x;switch(x)
{
case 1:
order.concatenate();
break;
case 2:
order.stlength();
break;
case 3:
order.compare();
break;
case 4:
order.display();
break;
case 5:
break;
default :
cout<<"\nError in input; try again\n";
}
}
while(x != 5);


	cout<<"\n\nEnter first string : ";
	Str1.get();
	cout<<"\nEnter second string : ";
	Str2.get();
cout<<"\n\n___________________________________________________________________________";
	cout<<"\nFirst string : ";
	Str1.display();
	cout<<"\nSecond String is : ";
	Str2.display();
cout<<"\n\n___________________________________________________________________________";
	Str3.concatenate(Str1,Str2);
	cout<<"\n\nAfter concatenation : ";
	Str3.display();
	cout<<"\n\nLength of first string : ";
	Str1.stlength();
	cout<<"\n\nlength of second string : ";
	Str2.stlength();
	cout<<"\n\nLength of concatenated string : ";
	Str3.stlength();
	cout<<"\n\nComparison of string : ";
	Str3.compare(Str1,Str2);
cout<<"\n\n___________________________________________________________________________"<<endl;
	return 0;

}

