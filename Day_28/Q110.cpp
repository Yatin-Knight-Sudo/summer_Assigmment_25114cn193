#include <iostream>
using namespace std;

struct Account
{
    int accNo;
    string name;
    double balance;
};

int main()
{
    Account a[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n1. Create Account";
        cout << "\n2. View Accounts";
        cout << "\n3. Deposit Money";
        cout << "\n4. Withdraw Money";
        cout << "\n5. Search Account";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Account Number: ";
            cin >> a[count].accNo;

            cout << "Enter Name: ";
            cin >> a[count].name;

            cout << "Enter Initial Balance: ";
            cin >> a[count].balance;

            count++;
        }

        else if(choice == 2)
        {
            for(int i = 0; i < count; i++)
            {
                cout << "\nAccount Number: " << a[i].accNo;
                cout << "\nName: " << a[i].name;
                cout << "\nBalance: " << a[i].balance << endl;
            }
        }

        else if(choice == 3)
        {
            int acc;
            double amount;

            cout << "Enter Account Number: ";
            cin >> acc;

            cout << "Enter Amount: ";
            cin >> amount;

            for(int i = 0; i < count; i++)
            {
                if(a[i].accNo == acc)
                {
                    a[i].balance += amount;
                    cout << "Money Deposited Successfully";
                }
            }
        }

        else if(choice == 4)
        {
            int acc;
            double amount;

            cout << "Enter Account Number: ";
            cin >> acc;

            cout << "Enter Amount: ";
            cin >> amount;

            for(int i = 0; i < count; i++)
            {
                if(a[i].accNo == acc)
                {
                    if(a[i].balance >= amount)
                    {
                        a[i].balance -= amount;
                        cout << "Money Withdrawn Successfully";
                    }
                    else
                    {
                        cout << "Insufficient Balance";
                    }
                }
            }
        }

        else if(choice == 5)
        {
            int acc;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> acc;

            for(int i = 0; i < count; i++)
            {
                if(a[i].accNo == acc)
                {
                    cout << "\nAccount Number: " << a[i].accNo;
                    cout << "\nName: " << a[i].name;
                    cout << "\nBalance: " << a[i].balance << endl;

                    found = true;
                    break;
                }
            }

            if(found == false)
            {
                cout << "Account Not Found";
            }
        }

    } while(choice != 6);

    return 0;
}