
#include<iostream>
using namespace std;
const int m = 50;
class ITEMS
{
int itemCode[m];
float itemPrice[m];
int itemQuantity[m];
char itemName[m];
int total[m];
int count;
public:
void CNT(void){count = 0;}
void getitem(void);
void displaySum(void);
void remove(void);
void displayItems(void);
void display_bill(void);
};
void ITEMS :: getitem(void)
{
cout<<"\nEnter Item Code: ";
cin>>itemCode[count];
cout<<"\nEnter Item Cost: ";
cin>>itemPrice[count];
cout<<"\nEnter Item quantity: ";
cin>>itemQuantity[count];

count++;
}
void ITEMS :: displaySum(void)
{
float sum = 0;
for(int i=0;i<count;i++)
sum = sum + itemPrice[i];
cout<<"\nTotal value: "<<sum<<endl;
}
void ITEMS :: remove(void)
{
int a;
cout<<"\nEnter item Code: ";
cin>>a;
for(int i=0;i<count;i++)
if(itemCode[i] == a)
itemPrice[i] = 0;
}
void ITEMS :: displayItems(void)
{
cout<<"\nCode\tPrice\n";
for(int i=0;i<count;i++)
{
cout<<itemCode[i]<<"\t"<<itemPrice[i]<<"\n";
}
cout<<"\n";
}

void ITEMS :: display_bill(void)
{
  for(int i=0;i<count;i++)
{
 total[i] = itemQuantity[i]*itemPrice[i];
}
cout<<"\nItem Code\tUnit Price\tQuantity\tTotal Price\n";
for(int i=0;i<count;i++)
{
cout<<itemCode[i]<<"\t\t"<<itemPrice[i]<<"\t\t"<<itemQuantity[i]<<"\t\t"<<total[i]<<"\n\n";
}
}
int main()
{

ITEMS order;
order.CNT();
int x;
do
{
cout<<"-----------------------------------------------------------------------------------";
cout<<"\n You can do the following : ";
cout<<"\n 1. Add an item ";
cout<<"\n 2. Display bill ";
cout<<"\n 3. Delete an item ";
cout<<"\n 4. Display all item ";
cout<<"\n 5. Quit ";
cout<<"\n What is your Option: ";
cout<<"\n--------------------------------------------------------------------------------------";
cin>>x;switch(x)
{
case 1:
order.getitem();
break;
case 2:
order.display_bill();
break;
case 3:
order.remove();
break;
case 4:
order.displayItems();
break;
case 5:
break;
default :
cout<<"\nError in input; try again\n";
}
}
while(x != 5);
return 0;
}



