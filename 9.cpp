#include<iostream>
using namespace std;
class object
{int a;
static int count;
public:
void setvalue()
{a=++count;
}
void display()
{cout<<"Object number:"<<a<<endl;
}
static void showcount()
{cout<<"Count of objects found:"<<count<<endl;
}        
};
int object::count;
int main()
{int n;char ans;
cout<<"\n\n--------------------------------------------------------------";
cout<<"\n\nEnter number of objects to be created:\n";
cin>>n;
object O[n];
for(int i=0;i<n;i++)
{O[i].setvalue();

}
object::showcount();
for(int i=0;i<n;i++)
{O[i].display();
}
cout<<"\n\n--------------------------------------------------------------";
cout<<"\n\nDo you wish to add more objects?\nChoose 1 to Continue\nChoose 0 to Exit\n";
cin>>ans;
if(ans==1)
{cout<<"\n\nEnter number of objects to be created:\n";
cin>>n;
for(int i=0;i<n;i++)
{   
O[i].setvalue();

}
}
object::showcount();
for(int i=0;i<n;i++)
{O[i].display();
}
return 0;
}
