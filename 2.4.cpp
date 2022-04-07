#include<iostream>
using namespace std;

class matrix 
{
    int row,column ;
    int **p ;
    public: 
        matrix(){}
        matrix(int r,int c);
        void create_matrix();
        void display_matrix();
        friend matrix operator+(matrix A, matrix B);
        friend matrix operator*(matrix A, matrix B);
};

matrix::matrix(int r,int c)
{
    row = r ; column = c ;
    p = new int* [row+1];
    for(int i = 0; i < column ; i++){
        p[i] = new int[column+1];
    }
}

void matrix::create_matrix(){
    cout<<"Enter "<<column<<"X"<<row<<" elements \n";
    for(int i = 0 ; i < column ; i++){
        for(int j = 0; j < row; j++){
            int e ;
            cin >> e ;
            p[i][j] = e ;
        }
    }
}

void matrix::display_matrix(){
    for(int i = 0 ; i < column ; i++){
        for(int j = 0; j < row; j++){
            cout << p[i][j] << " " ;
        }
        cout << "\n" ;
    } 
}

matrix operator+ (matrix A , matrix B){
    
    if (A.row == B.row && A.column == B.column){ 
        matrix e(A.row,A.column);
        for(int i = 0 ; i < e.row ; i++){
            for(int j = 0; j < e.column; j++){
                e.p[i][j] = A.p[i][j] + B.p[i][j]; 
            }
        }
        return e ;    
    }
    else {
        matrix k(0,0);
        cout << "Incompatible dimensions\n";
        return k;
    }
    
}

matrix operator* (matrix A, matrix B)
{
    if (A.column == B.row){
        matrix x(A.row,B.column);
        for(int i = 0 ;i < A.row ;i++){
            for(int j = 0 ; j < B.column ; j++){
                int sum = 0;
                for(int n = 0; n<B.row ;n++){
                    sum+= A.p[i][n] * B.p[n][j];
                }
                x.p[i][j] = sum;
            }    
        }
        return x ;
    }
    else{
        cout << "Dimensions not compatible\n";
        matrix y(1,1);
        return y;
    }
    
}

int main()
{
cout<<"***************************************************************************"<<endl;
    cout << "Enter size of matrix 1 :";
    int r1,r2,c1,c2;
    cin >> r1 >> c1 ;
    matrix A(r1,c1);
    A.create_matrix();
    cout << "\n\nEnter size of matrix 2 :";
    cin >> r2 >> c2 ;
    matrix B(r2,c2);
    B.create_matrix();
    cout << "\n\nA = \n";
    A.display_matrix();
    cout << "\n";
    cout << "B = \n";
    B.display_matrix();
    cout << "\n";
    cout << "A + B = \n";
    matrix C = A + B;
    C.display_matrix();
    cout << "\n";
    cout << "A * B = \n";
    matrix D = A * B;
    D.display_matrix();
    cout << "\n";
cout<<"***************************************************************************"<<endl;
}

