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



int main (){
	
	cout << endl << endl << endl << endl << endl << "\t\t\t\t\t\t -: BANK MANAGMENT SYSTEM  :- " ;
	cout << endl  << "\t\t\t\t\t\t -----------------------------" ;
	cout << endl << "\t\t\t\t\t\t -: Designed N Programed By :- "  ;
	cout << endl << "\t\t\t\t\t\t -----------------------------" ;
	cout << endl << "\t\t\t\t\t\t        HET R GONDALIYA  "  << endl ;
	cout << endl << "\t\t\t\t\t\t *****************************" << endl ;
	cout << endl << "\t\t\t\t\t\t\t -: Trainer :- " ;
	cout << endl << "\t\t\t\t\t\t -----------------------------" ;
	cout << endl << "\t\t\t\t\t\t       Gaurav Kanani     " << endl << endl << endl ;
		
	char start;
	cout << "\t\t\t\t\t\tPess any key & enter to continue...";
	cin >> start;

	char log_in;
	cout << endl << endl << endl << endl << endl << endl  << "\t\t\t\t\t ---------------------------------------------------- " ;
	cout << endl << "\t\t\t\t\t -: Press A for login as administator S for staff :- "  ;
	cout <<  endl << "\t\t\t\t\t ---------------------------------------------------- " << endl << endl << endl ;
	cin  >> log_in;
	
	char name[100];
	char email[100];
	int phone_num;
	int account_num;
	int choice;
	
	if(log_in=='a' || log_in=='A'){
	
		cout << endl << endl << endl <<  "----------------------------------------------------------------------------------------------------------------------";
		cout << endl << "\t\t\t\t\t\t -: Wellcome As administator :- ";
		cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl<<endl;\
		cout << "\t\t\t\t   Enter The Name OF administator\t\t     : ";
		cin >> name;
		cout << "\t\t\t\t   Enter The Account NUmber Of administator          : ";
		cin >> account_num;
		cout << "\t\t\t\t   Enter The Phone NUmber Of administator\t     : ";
		cin >> phone_num;
		cout << "\t\t\t\t   Enter The E-mail Of administator\t             : ";
		cin >> email;
		cout << endl << endl << endl;

		cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "   Name           :- "<< name << endl;
		cout << "   Account NUmber :- " << account_num << endl;
		cout << "   Phone NUmber   :- " << phone_num << endl;
		cout << "   E-mail         :- " << email ;
		cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
		cout << "\t\t\t\t\t-: Press [1] to Deposite the money :-" << endl << endl ;
		cout << "\t\t\t\t\t-: Press [2] to Transfer the money :-" << endl << endl;
		cout << "\t\t\t\t\t-: Press [3] to Withdraw the money :-" << endl << endl;
		cin >> choice;
		
		
		switch(choice){
			
			case 1:
		
				int deposite,after_bal;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Deposite Amaout : ";
				cin >> deposite;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
				cout << "\t\t\tCongrates Your Amount Has deposite Successfully." << endl << endl;
				after_bal=200000+deposite;
				cout << "\t\t\tYour Account Balance Is : " << after_bal << endl << endl;
			break;
			
			case 2:
		
				int transfer,after_bal1,dumy_account;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Amaout Which You Wanna Transfer : ";
				cin >> transfer;
				cout << "   Enter Another Account NUmber (Where You Wanna Transfer MOney ) : ";
				cin >> dumy_account;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				if(dumy_account==account_num){
					cout << "This is your account number " << dumy_account;
				}
				else{
					cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
					cout << "\t\t\tCongrates Your Amount Has Transfer Successfully." << endl << endl;
					after_bal1=200000-transfer;
					cout << "\t\t\tYour Account Balance Is : " << after_bal1 << endl << endl;		
			}
			break;
			
			case 3:
		
				int withdraw,after_bal2;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Whithdraw Amaout : ";
				cin >> withdraw;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
				cout << "\t\t\tCongrates Your Amount Has Withdraw Successfully." << endl << endl;
				after_bal2=200000-withdraw;
				cout << "\t\t\tYour Account Balance Is : " << after_bal2 << endl << endl;
				break;
			
			default:
				cout << "Invalid choice.....";
			break;				
		}
		
		
	}
	else if(log_in=='s' || log_in=='S'){
	
		cout << endl << endl << endl <<  "----------------------------------------------------------------------------------------------------------------------";
		cout << endl << "\t\t\t\t\t\t -: Wellcome As staf :- ";
		cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl<<endl;\
		cout << "\t\t\t\t\tEnter The Name OF Staff\t\t     : ";
		cin >> name;
		cout << "\t\t\t\t\tEnter The Account NUmber Of Staff    : ";
		cin >> account_num;
		cout << "\t\t\t\t\tEnter The Phone NUmber Of Staff\t     : ";
		cin >> phone_num;
		cout << "\t\t\t\t\tEnter The E-mail Of Satff\t     : ";
		cin >> email;
		cout << endl << endl << endl;

		cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "   Name           :- "<< name << endl;
		cout << "   Account NUmber :- " << account_num << endl;
		cout << "   Phone NUmber   :- " << phone_num << endl;
		cout << "   E-mail         :- " << email ;
		cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
		cout << "\t\t\t\t\t-: Press [1] to Deposite the money :-" << endl << endl ;
		cout << "\t\t\t\t\t-: Press [2] to Transfer the money :-" << endl << endl;
		cout << "\t\t\t\t\t-: Press [3] to Withdraw the money :-" << endl << endl;
		cin >> choice;
		
		
		switch(choice){
			
			case 1:
		
				int deposite,after_bal;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Deposite Amaout : ";
				cin >> deposite;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
				cout << "\t\t\tCongrates Your Amount Has deposite Successfully." << endl << endl;
				after_bal=200000+deposite;
				cout << "\t\t\tYour Account Balance Is : " << after_bal << endl << endl;
			break;
			
			case 2:
		
				int transfer,after_bal1,dumy_account;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Amaout Which You Wanna Transfer : ";
				cin >> transfer;
				cout << "   Enter Another Account NUmber (Where You Wanna Transfer MOney ) : ";
				cin >> dumy_account;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				if(dumy_account==account_num){
					cout << "This is your account number " << dumy_account;
				}
				else{
					cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
					cout << "\t\t\tCongrates Your Amount Has Transfer Successfully." << endl << endl;
					after_bal1=200000-transfer;
					cout << "\t\t\tYour Account Balance Is : " << after_bal1 << endl << endl;		
			}
			break;
			
			case 3:
			
				int withdraw,after_bal2;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Whithdraw Amaout : ";
				cin >> withdraw;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
				cout << "\t\t\tCongrates Your Amount Has Withdraw Successfully." << endl << endl;
				after_bal2=200000-withdraw;
				cout << "\t\t\tYour Account Balance Is : " << after_bal2 << endl << endl;
				break;
			
			default:
				cout << "Invalid choice....";
			break;				
		}
		
		
	}
		
	else{
	
		cout << "Invalid Choice";
	}
	return 0;
}
