#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
    Exercise:
    Imagine you are developing a simple banking application in C++. 
    You have a class called BankAccount that represents a user's bank account. 

    The BankAccount class has the following attributes:
        accountNumber (integer) - represents the account number
        balance (double) - represents the account balance

    The BankAccount class also has the following methods:
        deposit(amount) - deposits the specified amount into the account
        withdraw(amount) - withdraws the specified amount from the account
        getBalance() - returns the current account balance

    In addition to the above functionality, you need to ensure that when a BankAccount object is destroyed, 
    it writes a log message indicating that the account is closed.

    Your task is to implement the BankAccount class with appropriate constructors, methods, and a destructor. 
    Demonstrate the need for a destructor by creating multiple BankAccount objects, manipulating them, 
    and observing the log messages when the objects are destroyed.

    Hint:
    To keep things simple, you can use a static variable to keep track of the number of BankAccount objects created, 
    and increment it in the constructor. 
    In the destructor, decrement the count and check if it reaches zero. 
    If so, write the log message.
*/


/* 
    Solution 
*/
class BankAccount {
    private:
    int accountNumber;
    double balance;
    static int accountCount; // Static variable to keep track of the number of accounts
    public:
    BankAccount();
    BankAccount (const int a){
        accountNumber=a;
            balance = 0.0;
        accountCount++;
        cout << "Account " << accountNumber << " created. Total accounts: " << accountCount << endl;
    };
    double getBalance() {
        return balance;
    }
    void deposit(int x){
    
        if(x<0){
            cout<<"cant deposit zero or <0"<<endl;

        }
        balance+=x;
    }
    ~BankAccount() {
        accountCount--;
        if (accountCount == 0) {
            cout << "All accounts closed." << endl;
        } else {
            cout << "Account " << accountNumber << " closed." << endl;
        }
    }
    void withdraw(int amount){
    if(amount>balance){
        cout<<"balance out of range !"<<endl;

    }
    else{
      balance=  balance-amount;
    }
}

};

int BankAccount::accountCount = 0;
int main() {

    /*      Example usage:     */ 

    BankAccount account1(12345); 

    BankAccount account2(67890);

    account1.deposit(1000);
    account2.deposit(500);
     

    cout << "Balance of account 1: " << account1.getBalance() << endl;
    cout << "Balance of account 2: " << account2.getBalance() << endl;
}