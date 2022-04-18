#include <iostream>
using namespace std;

int p;
class student
{
        int Roll_no;
        char Name[40];
        int subject1;
        int subject2;
        int subject3;
        int total_marks;
        char grade;
        float avg;
        string status;

public:
        void input();
        void display();
        void calcGrade();
};

void student::input()

{
 
        cout << "\n\nEnter name of the student" << endl;

        cin >> Name;

        cout << "Enter roll no of the student" << endl;

        cin >> Roll_no;
cout<<"\n_____________________________________";


        cout << "\nEnter marks for subject 1 out of 100" << endl;

        cin >> subject1;

        cout << "Enter marks for subject 2 out of 100" << endl;

        cin >> subject2;

        cout << "Enter marks for subject 3 out of 100" << endl;

        cin >> subject3;
cout<<"\n\n_____________________________________";

}

void student::calcGrade()
{
        total_marks = (subject1 + subject2 + subject3);
        avg=total_marks/3;
        if (avg>=90)

               {grade = 'A';
                status="PASS";
               }
        else if (avg<90 && avg>=70)

               {grade = 'B';
                status="PASS";
               }
        else if(avg<70 && avg>=50)
 
               {grade = 'C';
               status="PASS";
               }
        else 
             {grade='F';
             status="FAIL";   
              }
}


void student::display()
{     
        cout << "\n\n***********************Displaying details of student*****************";
        cout << "\n\nName of student:" << Name << endl;
        cout << "Roll no of student:" << Roll_no << endl;
        cout << "Marks for subject1 out of 100-   " << subject1 << endl;
        cout << "Marks for subject2 out of 100-   " << subject2 << endl;
        cout << "Marks for subject3 out of 100-   " << subject3 << endl;
cout<<"\n\n___________________________________________________________________________";

        calcGrade();
cout<<"\n\n___________________________________________________________________________";
        cout << "\nTotal marks of student out of 300:" << total_marks << endl;
        cout<<"Average marks of student:"<<avg<<endl;
        cout << "Grade of student:" << grade << endl;
        cout<<"Status:"<<status<<endl;  
}
        

int main()

{
        cout<<"\n\n\n*********************************WELCOME******************************";
        cout << "\n\nEnter number of students whose details should be taken:";
        cin >> p;
        student S[p] ;

        for (int i = 0; i < p; i++)

        {
cout<<"\n\n___________________________________________________________________________";
               cout << "\nEnter details of student " << i + 1 << ":" << endl;

               S[i].input();
        }

        for (int i = 0; i < p; i++)

        {
               S[i].display();

        }
cout <<"\n\n***********************Thank you**************************"<<endl;  

        return 0;

}

