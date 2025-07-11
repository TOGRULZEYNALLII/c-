#include <iostream>
#include <string>

using namespace std;

/*
    Exercise: Bank Account Management System

    You need to implement a simple bank account management system using encapsulation. 
    The system should have the following features:

    1. Each account should have a unique account number, holder name, and balance.
    2. The balance should not be directly accessible from outside the class.
    3. The account holder should be able to deposit and withdraw funds.
    4. The account holder should be able to check their account balance.
    
    Your task is to create a C++ class called BankAccount that encapsulates the above features. 
    Here's a code template to get you started:
*/

class BankAccount {
    private:
        // Private member variables 
        int accountNumber;
        string holderName;
        double balance;

    public:
        // Constructor
        BankAccount(int accountNumber, const string &holderName, double initialBalance) {
            this->accountNumber = accountNumber;
            this->holderName = holderName;
            this->balance = initialBalance;
        }
        void deposit(int deposit){

            if(deposit<=0){
                cout<<"cant deposite this value sorry.";
            }
            else{
              balance += deposit;
            }
        }
           void withdraw(int draw){
            if(draw>balance){
                cout<<"your balance is't enough for withdraw";
            }
            else{
               balance -= draw; 
            }
        }


        void checkBalance(){
            cout << "Account Number: " << accountNumber << endl;
            cout << "Holder Name: " << holderName << endl;
            cout << "Balance: $" << balance << endl;

        }

        // Member functions
        // TODO: Implement member functions for deposit, withdraw, and check balance
};



int main() {

    // TODO: Create an instance of the BankAccount class
    // TODO: Test the deposit, withdraw, and check balance operations

    /*
        You need to complete the implementation of the BankAccount class by:

        1. Initializing the member variables in the constructor.
        2. Implementing member functions for deposit, withdraw, and check balance.
        3. Testing the functionality of your class in the main function by creating an instance 
        of BankAccount and performing deposit, withdrawal, and balance checks.
        
        Remember to enforce encapsulation by keeping the member variables private and providing public member functions to access and modify them.

        This exercise will help you practice encapsulation and understand how to hide 
        implementation details while exposing a controlled interface to the users of your class!
    */
    BankAccount account(12345, "John Doe", 1000.0);
    account.checkBalance();
    cout<<"if you want to withdraw money enter 2 for deposit 1 for quit press 0"<<endl;
    int choice;
    cin >> choice;
    if (choice == 2) {
        cout << "Enter amount to withdraw: ";
        int withdrawAmount;
        cin >> withdrawAmount;
        account.withdraw(withdrawAmount);
        cout << "After withdrawing $" << withdrawAmount << ":" << endl;
        account.checkBalance();
    }else if (choice == 1) {
        cout << "Enter amount to deposit: ";
        int depositAmount;
        cin >> depositAmount;
        account.deposit(depositAmount);
        cout << "After depositing $" << depositAmount << ":" << endl;
        account.checkBalance();
    }else if (choice == 0) {
        cout << "Exiting the program." << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

