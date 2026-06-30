#include <iostream>
#include <string>
using namespace std;

void addContacts(string name[], string phone[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Contact " << i + 1 << endl;

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name[i]);

        cout << "Enter Phone Number: ";
        getline(cin, phone[i]);
    }
}

void displayContacts(string name[], string phone[], int n)
{
    cout << "\n----- Contact List -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name : " << name[i] << endl;
        cout << "Phone: " << phone[i] << endl;
    }
}

void searchContact(string name[], string phone[], int n)
{
    string search;
    int found = 0;

    cin.ignore();
    cout << "Enter Name to Search: ";
    getline(cin, search);

    for (int i = 0; i < n; i++)
    {
        if (name[i] == search)
        {
            cout << "\nContact Found!" << endl;
            cout << "Name : " << name[i] << endl;
            cout << "Phone: " << phone[i] << endl;
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        cout << "Contact Not Found." << endl;
    }
}

int main()
{
    string name[100], phone[100];
    int n, choice;

    cout << "Enter Number of Contacts: ";
    cin >> n;

    addContacts(name, phone, n);

    do
    {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Display Contacts" << endl;
        cout << "2. Search Contact" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            displayContacts(name, phone, n);
        }
        else if (choice == 2)
        {
            searchContact(name, phone, n);
        }
        else if (choice == 3)
        {
            cout << "Program Ended." << endl;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}