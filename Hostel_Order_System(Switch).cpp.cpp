#include<iostream>
using namespace std;
int main(){
	
	int choice=0;
	int juicePrice=420;
	int coffeePrice=320;
	int teaPrice=220;
	int quantity=0;
	float totalBill=0.0;
	float const salesTax=0.16;
	float afterSalesTax=0.0;
	float finalInvoice=0.0;
	
	cout<<"\t\t\t*********************Hostel Store*********************\n\n";
	cout<<"\t\t\t\t\t Select the item to buy\n";
	cout<<"\t\t\t\t\t   1 for-Juice\n";
	cout<<"\t\t\t\t\t   2 for-Coffee\n";
	cout<<"\t\t\t\t\t   3 for-Tea\n\n";
	
	

	cout<<"\t\t\t\t Enter Choice: ";
	cin>>choice;
 
	switch(choice){
	case 1:
	cout<<"You have selected juice";
	break;
	
	case 2:
	cout<<"You have selected coffee";
	break;
		
	case 3:
	cout<<cout<<"You have selected tea";
	break;
	
	
	default:
		cout<<"Invalid choice";
		break;
}
	}
