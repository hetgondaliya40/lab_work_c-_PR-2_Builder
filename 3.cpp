/*





                                                 -: BANK MANAGMENT SYSTEM  :-
                                                 -----------------------------
                                                 -: Designed N Programed By :-
                                                 -----------------------------
                                                        HET R GONDALIYA

                                                 *****************************

                                                         -: Trainer :-
                                                 -----------------------------
                                                       Gaurav Kanani


                                                Pess any key & enter to continue...1






                                         ----------------------------------------------------
                                         -: Press A for login as administator S for staff :-
                                         ----------------------------------------------------


a



----------------------------------------------------------------------------------------------------------------------
                                                 -: Wellcome As administator :-
----------------------------------------------------------------------------------------------------------------------



                                   Enter The Name OF administator                    : het
                                   Enter The Account NUmber Of administator          : 543752
                                   Enter The Phone NUmber Of administator            : 768574
                                   Enter The E-mail Of administator                  : hetgondaliya104@gmail.com




----------------------------------------------------------------------------------------------------------------------
   Name           :- het
   Account NUmber :- 543752
   Phone NUmber   :- 768574
   E-mail         :- hetgondaliya104@gmail.com
----------------------------------------------------------------------------------------------------------------------


                                        -: Press [1] to Deposite the money :-

                                        -: Press [2] to Transfer the money :-

                                        -: Press [3] to Withdraw the money :-

1

----------------------------------------------------------------------------------------------------------------------
   Enter Deposite Amaout : 100000
----------------------------------------------------------------------------------------------------------------------



                        Your Actual Amount Is : 200000

                        Congrates Your Amount Has deposite Successfully.

                        Your Account Balance Is : 300000


*/
#include <iostream>
using namespace std;

class Bank {
    private:
    	char pa1, pa2 ;
    	int id_1,phone ;
    	string name,email;
        float balance=0;
    public:
    	
    	Banner(){
			cout<< "\t\t:-YOUR BANK MANGEMENT SYSTEM -: "<< endl;
			cout<<"************************************************************ "<< endl ;
			cout<<endl;
			cout<< "\t\t:- Design And Program by -: "<< endl;
			cout<<"************************************************************ "<< endl;
			cout<<"\t\thet gondaliya" <<endl;
			cout<<endl;
			cout<< "\t\t        :- Trainer -:       "<< endl;
			cout<<"************************************************************ "<< endl;
			cout<<"\t\t\t gaurav sir         "<<endl;
			cout<<endl;
			cout<<endl;
			cout<< "press any key to go to next page : "; cin>>pa1;
			system("cls");
		}
		
		Staff(){
			rep : 
			cout<<"************************************************************** "<< endl;
			cout<<" -: Press A to login as administrator or B to login as staff:-"<<endl;
			cout<<"************************************************************** "<< endl;
			cout<<endl;
			cout<< "press a key to go to next page : "; cin>>pa2;
			
			if(pick=='A' || pick=='a')
			{
				cout<<"\n************************************************************" ;
				cout<<"\nWelcome to administration page : ";
				cout<<"\n************************************************************" ;
				cout<< endl;
				cout<< "\tEnter The Name Of Bank Staff Member :" ; cin>>name ;
				cout<< "\tEnter The ID of Bank Staff Member :" ; cin>>id_1 ;
				cout<< "\tEnter The Phone Number Of Bank Staff Member :" ; cin>>phone ;
				cout<< "\tEnter The Email Address of Bank Staff Member :"; cin>>email ;
				
				cout<<"\nSuccessfully Registered! : \n";
				cout<<"***************************************************************"<<endl ;
				cout<< "\n\t Name \t\t:" <<name;
				cout<< "\n\t Amount Number\t:"<<id_1;
				cout<< "\n\t Phone Number \t:"<<phone;
				cout<< "\n\t Email \t\t:"<<email;
				cout<<"\n*************************************************************"<<endl ;
			}
			
			else if(pick=='B' || pick=='b')
			{
				cout<<"\n************************************************************" ;
				cout<<"\nWelcome to staff panel : ";
				cout<<"\n************************************************************" ;
				cout<< endl;
				cout<< "\tEnter The Name Of Bank Staff Member :" ; cin>>name ;
				cout<< "\tEnter The ID of Bank Staff Member :" ; cin>>id_1 ;
				cout<< "\tEnter The Phone Number Of Bank Staff Member :" ; cin>>phone ;
				cout<< "\tEnter The Email Address of Bank Staff Member :"; cin>>email ;
				
				cout<<"\nSuccessfully Registered! : \n";
				cout<<"***************************************************************"<<endl ;
				cout<< "\n\t Name \t\t:" <<name;
				cout<< "\n\t Amount Number\t:"<<id_1;
				cout<< "\n\t Phone Number \t:"<<phone;
				cout<< "\n\t Email \t\t:"<<email;
				cout<<"\n*************************************************************"<<endl ;
			}
			else 
			{
				cout<<"\nInvalid Input!\n\n";
				goto rep;
			}
			
		}
        void deposit(float amount) {
            balance += amount;
            cout << amount << " INR deposited successfully!" << endl;
        }
        void withdraw(float amount) {
            if (amount > balance) {
                cout << "Insufficient balance. Withdrawal failed." << endl;
            } else {
                balance -= amount;
                cout << amount << " INR withdrawn successfully!" << endl;
            }
        }
        void display() {
            cout << "Your current balance is " << balance <<"INR"<<  endl;
        }
};

int main() {
    Bank customer;
    int choice;
    float amount;

	customer.Banner();
	customer.Staff();
	
    while (true) {
        cout << "\n\nPlease select an option:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "\n Option : ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter deposit amount in INR: ";
                cin >> amount;
                customer.deposit(amount);
                break;
                
            case 2:
                cout << "\nEnter withdrawal amount ";
                cin >> amount;
                customer.withdraw(amount);
                break;
                
            case 3:
                customer.display();
                break;
                
            case 4:
                cout << "\nThank you for using the Bank System!" << endl;
                exit(0);
                
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
return 0;
}
