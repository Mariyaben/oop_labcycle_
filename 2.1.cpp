#include<iostream>
#include<cmath>
using namespace std;
class VECTOR
{
    float i,j,k;
    float M;
    public:
        VECTOR(){}
        VECTOR(float a,float b,float c);
        friend bool operator==(VECTOR, VECTOR);
        friend bool operator!=(VECTOR, VECTOR);
        friend bool operator<=(VECTOR, VECTOR);
        friend bool operator>=(VECTOR, VECTOR);
        friend bool operator>(VECTOR, VECTOR);
        friend bool operator<(VECTOR, VECTOR);
        void display();        
};

void VECTOR::display()
{
    if (j>=0 and k>=0)
    {
    cout << i << "i + " << j << "j + " << k << "k";
    }
    else if (j>=0 and k<0)
    {
     cout << i << "i + " << j << "j  " << k << "k";
    }
    else if (j<0 and k>=0)
    {
     cout << i << "i  " << j << "j + " << k << "k";
    }
    else if (j<0 and k<0)
    {
     cout << i << "i  " << j << "j  " << k << "k";
    }
    cout <<"("<<M<<")";
}

VECTOR::VECTOR(float a,float b,float c)
{
    i = a;j = b;k = c;
    //To get magnitude of the vector
    M = sqrt((i*i)+(j*j)+(k*k));
}

bool operator==(VECTOR x,VECTOR y)
{
    if (x.M == y.M)
    {
        return true;
    }
    else return false;
}

bool operator!=(VECTOR x,VECTOR y)
{
    if (x.M != y.M)
    {
        return true;
    }
    else return false;
}

bool operator<=(VECTOR x,VECTOR y)
{
    if (x.M <= y.M)
    {
        return true;
    }
    else return false;
}

bool operator>=(VECTOR x,VECTOR y)
{
    if (x.M >= y.M)
    {
        return true;
    }
    else return false;
}

bool operator<(VECTOR x,VECTOR y)
{
    if (x.M < y.M)
    {
        return true;
    }
    else return false;

}

bool operator>(VECTOR x,VECTOR y)
{
    if (x.M > y.M)
    {
        return true;
    }
    else return false;
}

//Function to give output based on T/F values
void compare_out(bool x)
{
    if (x==true)
    {
        cout << "\nThe comparison is True\n";
    }
    else if(x==false)
    {
        cout << "\nThe comparison is False\n";
    }
    else 
    {
        cout << "\nNo Output\n";
    }
}

int main()
{
    cout <<"**********************************************************************"<<endl;
    float l,m,n;
    cout << "Enter components of vector 1\n";
    cin >> l >> m >> n;
    VECTOR V1(l,m,n);
    cout << "Enter components of vector 2\n";
    cin >> l >> m >> n;
    VECTOR V2(l,m,n);
cout<<"**********************************************************************"<<endl;
    cout << "\n\n                MENU\n";
    cout << "You can choose from the following comparison operators\n1. ==\n2. !=\n3. <=\n4. >=\n5. <\n6. >\n";
    cout << "7 - To Exit\n\n";
    int choice = 0;
    while (choice != 7)
    {
        cout << "\n\nChoose an option \n\n";
        cin >> choice ;

        if(choice == 1){
            V1.display();
            cout << "==";
            V2.display();
            compare_out(V1 == V2);
        }
        else if(choice == 2)
        {
            V1.display();
            cout << "!=";
            V2.display();
            compare_out(V1 != V2);
        }
        else if(choice == 3){
            V1.display();
            cout << "<=";
            V2.display();
            compare_out(V1 <= V2);
        }
        else if(choice == 4){
            V1.display();
            cout << "!=";
            V2.display();
            compare_out(V1 >= V2);
        }
        else if(choice == 5){
            V1.display();
            cout << "<";
            V2.display();
            compare_out(V1 < V2);
        }
        else if(choice == 6){
            V1.display();
            cout << ">";
            V2.display();
            compare_out(V1 > V2);
        }
        else if(choice == 7){
            cout << "Thanks for using\n";

cout<<"**********************************************************************"<<endl;
        }
        else{
            cout << "Error\n";
        }
    }
    return 0 ;
}
