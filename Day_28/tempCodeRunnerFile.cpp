#include <iostream>
#include <string> // Required for clean string manipulation
using namespace std;

struct Contact
{
    string name;
    string phone;
};

int main()
{
    Contact c[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n=======================";
        cout << "\n1. Add Contact";
        cout << "\n2. View Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Delete Contact";
        cout << "\n5. Exit";
        cout << "\n=======================";
        cout << "\nEnter Choice: ";
        
        cin >> choice;
        
        // Clear the buffer after reading an integer so getline() doesn't break
        cin.ignore(); 

        if(choice == 1)
        {
            if(count >= 100)
            {
                cout << "\nError: Contact list is full!\n";
            }
            else
            {
                cout << "Enter Name: ";
                getline(cin, c[count].name); // Safely captures full names with spaces

                cout << "Enter Phone Number: ";
                getline(cin, c[count].phone);

                count++;
                cout << "Contact Added Successfully!\n";
            }
        }

        else if(choice == 2)
        {
            if(count == 0)
            {
                cout << "\nNo Contacts Found\n";
            }
            else
            {
                cout << "\n--- Contact List ---";
                for(int i = 0; i < count; i++)
                {
                    cout << "\n[" << i + 1 << "] Name: " << c[i].name;
                    cout << "\n    Phone: " << c[i].phone << endl;
                }
            }
        }

        else if(choice == 3)
        {
            string searchName;
            bool found = false;

            cout << "Enter Name to Search: ";
            getline(cin, searchName);

            for(int i = 0; i < count; i++)
            {
                if(c[i].name == searchName)
                {
                    cout << "\nContact Found:";
                    cout << "\nName: " << c[i].name;
                    cout << "\nPhone: " << c[i].phone << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "\nContact Not Found\n";
            }
        }

        else if(choice == 4)
        {
            string deleteName;
            bool found = false;

            cout << "Enter Name to Delete: ";
            getline(cin, deleteName);

            for(int i = 0; i < count; i++)
            {
                if(c[i].name == deleteName)
                {
                    // Shifting elements to the left to overwrite the deleted contact
                    for(int j = i; j < count - 1; j++)
                    {
                        c[j] = c[j + 1];
                    }

                    count--;
                    found = true;

                    cout << "\nContact Deleted Successfully\n";
                    break;
                }
            }

            if(!found)
            {
                cout << "\nContact Not Found\n";
            }
        }

        else if(choice != 5)
        {
            cout << "\nInvalid Choice. Please try again.\n";
        }

    } while(choice != 5);

    cout << "\nProgram Ended. Goodbye!";
    return 0;
}