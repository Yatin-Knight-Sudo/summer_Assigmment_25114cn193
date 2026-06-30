#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i, choice;
    string book[100], author[100];
    int copies[100];

    cout << "Enter the number of books: ";
    cin >> n;
    cin.ignore();

    for (i = 0; i < n; i++)
    {
        cout << "\nEnter details of Book " << i + 1 << endl;

        cout << "Book Name: ";
        getline(cin, book[i]);

        cout << "Author Name: ";
        getline(cin, author[i]);

        cout << "Number of Copies: ";
        cin >> copies[i];
        cin.ignore();
    }

    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====" << endl;
        cout << "1. Display All Books" << endl;
        cout << "2. Search Book" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            cout << "\nLibrary Books\n";

            for (i = 0; i < n; i++)
            {
                cout << "\nBook " << i + 1 << endl;
                cout << "Book Name: " << book[i] << endl;
                cout << "Author: " << author[i] << endl;
                cout << "Copies: " << copies[i] << endl;
            }
        }
        else if (choice == 2)
        {
            string search;
            int found = 0;

            cout << "Enter Book Name: ";
            getline(cin, search);

            for (i = 0; i < n; i++)
            {
                if (book[i] == search)
                {
                    cout << "\nBook Found!" << endl;
                    cout << "Book Name: " << book[i] << endl;
                    cout << "Author: " << author[i] << endl;
                    cout << "Copies: " << copies[i] << endl;
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                cout << "Book not found." << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Thank You!" << endl;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}