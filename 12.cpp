#include<iostream>

using namespace std;

class complex

{
    int real,imag;
public:
    void set()
    {
        cout<<"\n\nEnter the Real part of Complex number"<<endl;
        cin>>real;
        cout<<"\nEnter the Imaginary part of Complex number"<<endl;
        cin>>imag;
    }

friend complex sum(complex,complex);
void display();
    
};

void complex::display()
{
     if (imag>=0)
    {
     cout<<"\n\nThe sum of the complex numbers is: "<<real<<"+"<<imag<<"i"<<endl;
    }
    else 
    {
     cout<<"\n\nThe sum of the complex numbers is: "<<real<<imag<<"i";
    }
    
}
complex sum(complex a,complex b)

{
    complex t;
    t.real=a.real+b.real;
    t.imag=a.imag+b.imag;
    return t;
}

int main()

{
    cout<<"\n\n___________________________________________________________________________";
    complex a,b,c;
    a.set();
    b.set();
    c=sum(a,b);
    c.display();
cout<<"\n\n___________________________________________________________________________"<<endl;
    return(0);

}


