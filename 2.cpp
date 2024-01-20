/*
2. WAP to make Supermarket Billing System.
Requirements:
(A) Verify User Id And Password
(B) User Input Item Number , Item Name , Quantity , Price , Discount.
*/

#include<iostream>
using namespace std;

class Supermarket{
	private :
	int super_id;
	int super_pass;
	int super_num;
	int super_item;
	int super_quntity;
	int super_price;
	int super_discount;
	
	public :
		
		supermarket(){
			
		cout<<"\tEnter ID number:";
		cin>>this->super_id;
		
		cout<<"\tEnter PASS :";
		cin>>this->super_pass;
		
		cout<<"ID & PASSWORD IS VERIFYED"<<endl;
		
		cout<<"\tEnter PRODUCT NUMBER:";
		cin>>this->super_num;
		
		cout<<"\tEnter item number:";
		cin>>this->super_item;
		
		cout<<"\tEnter quntity number:";
		cin>>this->super_quntity;
		
		cout<<"\tEnter price number:";
		cin>>this->super_price;
		
		cout<<"\tEnter discount number:";
		cin>>this->super_discount;
			
		}
		Supermarket(){
			cout<<"\tYOUR BILL IS READY\n"<<endl;
		}
};



int main(){
	
	Supermarket s;
	
	s.Supermarket;
	s.Supermarket;
	
	return 0;
	
}
