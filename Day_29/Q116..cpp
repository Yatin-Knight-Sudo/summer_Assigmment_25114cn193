#include <iostream>
using namespace std;

int main()
{
    int id[100];
    string name[100];
    int quantity[100];

    int n = 0;
    int choice;

    do
    {
        cout << "\n----- Inventory Management System -----\n";
        cout << "1. Add Product\n";
        cout << "2. View Products\n";
        cout << "3. Search Product\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Product ID: ";
            cin >> id[n];

            cout << "Enter Product Name: ";
            cin >> name[n];

            cout << "Enter Quantity: ";
            cin >> quantity[n];

            n++;

            cout << "Product Added Successfully!\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No products available.\n";
            }
            else
            {
                cout << "\nID\tName\tQuantity\n";

                for (int i = 0; i < n; i++)
                {
                    cout << id[i] << "\t" << name[i] << "\t" << quantity[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            int searchId;
            int found = 0;

            cout << "Enter Product ID to search: ";
            cin >> searchId;

            for (int i = 0; i < n; i++)
            {
                if (id[i] == searchId)
                {
                    cout << "\nProduct Found\n";
                    cout << "ID: " << id[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Quantity: " << quantity[i] << endl;

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                cout << "Product not found.\n";
            }
        }
        else if (choice == 4)
        {
            cout << "Exiting Program...\n";
        }
        else
        {
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}