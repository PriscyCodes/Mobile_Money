#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    string pin = "0000";
    int numAttempts = 0;
    
    while (true) {
        // Authentication
        string enteredPin;
        cout << "Enter PIN: ";
        cin >> enteredPin;
        if (enteredPin != pin) {
            numAttempts++;
            if (numAttempts >= 3) {
                cout << "Too many wrong attempts. Exiting program." << endl;
                return 0;
            }
            cout << "Incorrect PIN. Please try again." << endl;
            continue;
        }
        numAttempts = 0; // Reset wrong attempts counter
        
        // Menu
        cout << "Select an option:" << endl;
        cout << "1. Reset PIN" << endl;
        cout << "2. Check balance" << endl;
        cout << "3. Send money" << endl;
        cout<<"4. Make Payments"<<endl;
        cout << "5. Exit" << endl;
        int option;
        cin >> option;
        
        // Option 1: Reset PIN
         if (option ==1){
      string  EnteredPin;
      cout<<"Enter current pin"<<endl;
      cin >>EnteredPin;
      if(EnteredPin!=pin){cout<<"Wrong pin input. Exiting."<<endl; return 0;}
      if(EnteredPin==pin){cout<<"Enter New Pin"<<endl;
      cin>>EnteredPin;
      cout<<"Reset pin is successful."<<endl; return 0;}}
      
      
        // Option 2: Check balance
        else if (option == 2) {
		string enteredpin;
		cout<<"Enter pin to continue: ";
        cin>>enteredpin;
        if(enteredpin==pin){cout << "Your current balance is Ghs " << balance << endl; return 0;
        } else{cout<<"Incorrect pin. Exiting.";return 0;
		}}
        
        // Option 3: Send money
          int choice,number;
      string reference,Enteredpin;
      float amount;
      if(option==3){cout<<"Enter receipient number: ";
      cin>>number;
      cout<<"Enter amount: "; 
      cin>>amount;
      if(amount>balance){cout<<"Insufficient balance to continue transaction."<<endl; return 0;} cout<<"Enter reference: ";
      cin>>reference;
      cout<<"Enter Pin to proceed: ";
      cin>>Enteredpin;
      
   if (Enteredpin==pin){cout<<"Press 1 to continue your transaction or 2 to exit"<<endl;}
   if(Enteredpin!=pin){cout<<"Wrong pin input. Exiting"<<endl; return 0;}
      cin>>choice;
      if (choice==2){cout<<"Transaction failed. Exiting."<<endl; return 0;}
    
      if (choice==1){cout<< "Tansaction Successful."<<endl;
      cout<<"You have successfully transferred Ghs "<<amount<< " to "<<number<< ", with reference: "<<reference<<"."<<endl;
      
      cout<<"Your current balance is Ghs " <<balance-amount<<"."<<endl;
      cout<<"Transaction was free."<<endl; 
      cout<<"Thank you for using MTN MOMO."<<endl;return 0;}}
        
        //option 4: Make Payments
        if(option==4){cout<<"This service is currently unavailable. Thank you for using MTN MOMO"<<endl;return 0;}
        
        // Option 5: Exit
        else if (option == 5) {
            cout << "Exiting program. Thank you for using MTN MOMO." << endl;
            return 0;
        }
        
        // Invalid option
        else {
            cout << "Invalid option. Please re-enter pin and choose from option 1 to 5." << endl;
        }
    }
}
