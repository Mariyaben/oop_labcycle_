#include <iostream>
using namespace std;
 
class Time
{
    int hours;
    int minutes;
    int seconds;
 
public:
    void getTime(void);
    void putTime(void);
    void addTime(Time T1,Time T2);
};
 
void Time::getTime(void)
{
    cout << "******************Enter time*****************" << endl;
    cout << "\nEnter hours: ";   
    cin>>hours;
    cout << "\nEnter minutes: ";  
    cin>>minutes;
    cout << "\nEnter seconds: ";  
    cin>>seconds;
}
 
void Time::putTime(void)
{
    cout << endl;
    cout << "*************Time after addition*************"<<endl;
    cout << hours << " hours " << minutes << " minutes " << seconds <<" seconds"<< endl;
}
 
void Time::addTime(Time T1,Time T2)
{
     
   seconds=T1.seconds+T2.seconds;
   minutes=T1.minutes+T2.minutes + seconds/60;;
   hours= T1.hours+T2.hours + (minutes/60);
   minutes %=60;
   seconds %=60;
}
 
 
int main()
{
    Time T1,T2,T3;
    T1.getTime();
    T2.getTime();
    T3.addTime(T1,T2);
    T3.putTime();
     
    return 0;
}

