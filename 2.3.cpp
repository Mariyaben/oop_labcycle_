#include<iostream>
using namespace std;

class VECTOR
{
    float i,j,k;
    public:
        friend float operator*(VECTOR,VECTOR);
        friend ostream &operator<<( ostream &output, const VECTOR &V ) { 
            output << V.i << "i + " << V.j << "j + " << V.k << "k\n" ;
            return output;            
        }
        friend istream &operator>>( istream  &input, VECTOR &V ) { 
            input >> V.i >> V.j >> V.k;
            return input;            
    }
};

float operator*(VECTOR A,VECTOR B)
{
    float DP = (A.i*B.i)+(A.j*B.j)+(A.k*B.k);
    return DP;
}


int main()
{
    cout<<"******************************************************************\n"<<endl;
    VECTOR A,B;
    cout << "Enter components of vector 1 : "<<endl;
    cin >> A ;
    cout << "Enter components of vector 2 : "<<endl;
    cin >> B ;
    cout << "\nA = "<< A << "\n";
    cout << "B = "<< B << "\n";
    int C = A * B ;
    cout << "C = A * B = " << C << "\n\n" ;
cout<<"******************************************************************\n"<<endl;
    return 0 ;
}

