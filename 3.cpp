#include<iostream>
using namespace std;

int p;
class bank
{
    char cust_name[40];
    int acc_no;
    char acc_type[20];
    double balance;
public:
    int assign(void);
    void deposit();
    void withdraw();
    void display(void);
};
int bank::assign(void)
{
    float initial;
    cout<<"\n\nPayment of Rs. 500/- is required to open an account \n"
    <<" You have to store at least Rs. 500/- to keep your account active\n";


    initial=500;
    balance=initial;
    cout<<" Please enter your name: \n";
    cin>>cust_name;
    cout<<" Please enter your account number: \n";
    cin>>acc_no;
    cout<<" Please enter account type: \n";
    cin>>acc_type;
}

void bank::deposit()
{
    int bal;

    cout<<"\nEnter the amount to deposit:";
    cin>>bal;
    balance+=bal;
    cout<<"\nAmount deposited successfuly\nYour New Balance:"<<balance;
}


void bank::withdraw()
{
    int bal;

    cout<<"\nYour balance :"<<balance<<"\nEnter amount to withdraw:";
    cin>>bal;
    if(bal<=balance)
    {
        balance-=bal;
        cout<<"\nRemaining Balance:"<<balance;
    }
    else
    {
        cout<<"Sorry, your account does not have enough balance. Please try again";
        
    }
}

    
    
void bank::display(void)
{
    cout<<"*************Displaying details**************";
    
    cout<<"\n\nName of the customer: "<<cust_name<<endl;
    cout<<"Account number: "<<acc_no<<endl;
    cout<<"Account type: "<<acc_type<<endl;
}

int main()

{
	cout<<"****************************WELCOME*************************";
        const int customer_number=20;
	int choice;
	bool Close = false;
	bank* customer=new bank[customer_number];
	int leave;

	for (int i = 0; i < customer_number; ++i) {
		if(Close){
			leave = 3;
		}
		else{
			leave = 1;
		}
		while (leave == 1){
		cout<<"\nCustomer no. "<<i+1<<endl;
		cout<<"                 MAIN MENU \n\nYou can choose from the following: \n            1. New Account\n            2. Deposit\n            3. Withdraw\n            4. Display details\nEnter your choice";
cout<<"\n\n___________________________________________________________________";
		cin>>choice;
		switch (choice) {
			case 1:
			    customer[i].assign();
				break;
			case 2:
				customer[i].deposit();
				break;
			case 3:
				customer[i].withdraw();
				break;
			case 4:
				customer[i].display();
				break;
		
			default:
				cout<<"Error! , Try Again"<<endl;
				break;
			}
			cout<<"\nDo you wish to continue or exit.\nChoose 1 to Continue\nChoose 2 to Next Customer\nChoose 3 to Exit\n";
			cin>>leave;
			
			if (leave==3) {
				Close = true;
			}
			
		}
	}
	return 0;
}

