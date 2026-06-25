#include <iostream>
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
        cout << "\n1. Add Contact";
        cout << "\n2. View Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Delete Contact";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Name: ";
            cin >> c[count].name;

            cout << "Enter Phone Number: ";
            cin >> c[count].phone;

            count++;
        }

        else if(choice == 2)
        {
            for(int i = 0; i < count; i++)
            {
                cout << "\nName: " << c[i].name;
                cout << "\nPhone: " << c[i].phone << endl;
            }
        }

        else if(choice == 3)
        {
            string name;
            bool found = false;

            cout << "Enter Name to Search: ";
            cin >> name;

            for(int i = 0; i < count; i++)
            {
                if(c[i].name == name)
                {
                    cout << "\nName: " << c[i].name;
                    cout << "\nPhone: " << c[i].phone << endl;

                    found = true;
                    break;
                }
            }

            if(found == false)
            {
                cout << "Contact Not Found";
            }
        }

        else if(choice == 4)
        {
            string name;
            bool found = false;

            cout << "Enter Name to Delete: ";
            cin >> name;

            for(int i = 0; i < count; i++)
            {
                if(c[i].name == name)
                {
                    for(int j = i; j < count - 1; j++)
                    {
                        c[j] = c[j + 1];
                    }

                    count--;
                    found = true;

                    cout << "Contact Deleted";
                    break;
                }
            }

            if(found == false)
            {
                cout << "Contact Not Found";
            }
        }

    } while(choice != 5);

    return 0;
}