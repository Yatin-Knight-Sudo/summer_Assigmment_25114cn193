
#include <iostream>
using namespace std;
int main()
{
    int choice,i,j;
    double balance=10000.0;
    double amount;
    do 
    {
        cout << "choice 1 : for withdrawing cash\n";
        cout << "choice 2: to check balance\n";
        cout << "choice 3: deposit money\n";
        cout << "choice 4 : exit\n";
        cin >> choice ;
        switch (choice)
        {
            case 1: 
            cout << "enter the amount to withdraw\n";
            cin >> amount;
            if (balance >=amount)
            {
            balance=balance-amount;
            cout << "balance left\n" << balance;
            }
            else
            {
                cout << "insufficient balance ";
                
            }
            break;
            case 2:
            cout << "balance is \n" << balance;
            break;
            case 3: 
            cout << "deposit the money\n";
            cin >> amount;
            balance+=amount;
            cout << "new balance\n" << balance;
            break;
            case 4:
            cout << "thank you for using atm\n";
            break;
            default :
            cout << "invalid choice .try again\n";
            
        }
    }while(choice !=4);
    
    

    return 0;
}