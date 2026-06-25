#include <iostream>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    bool issued;
};

int main()
{
    Book b[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n1. Add Book";
        cout << "\n2. View Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Book ID: ";
            cin >> b[count].id;

            cout << "Enter Book Title: ";
            cin >> b[count].title;

            cout << "Enter Author Name: ";
            cin >> b[count].author;

            b[count].issued = false;

            count++;
        }

        else if(choice == 2)
        {
            for(int i = 0; i < count; i++)
            {
                cout << "\nBook ID: " << b[i].id;
                cout << "\nTitle: " << b[i].title;
                cout << "\nAuthor: " << b[i].author;

                if(b[i].issued)
                    cout << "\nStatus: Issued";
                else
                    cout << "\nStatus: Available";

                cout << endl;
            }
        }

        else if(choice == 3)
        {
            int id;
            bool found = false;

            cout << "Enter Book ID: ";
            cin >> id;

            for(int i = 0; i < count; i++)
            {
                if(b[i].id == id)
                {
                    cout << "\nBook Found";
                    cout << "\nTitle: " << b[i].title;
                    cout << "\nAuthor: " << b[i].author;

                    found = true;
                    break;
                }
            }

            if(found == false)
            {
                cout << "Book not found";
            }
        }

        else if(choice == 4)
        {
            int id;

            cout << "Enter Book ID: ";
            cin >> id;

            for(int i = 0; i < count; i++)
            {
                if(b[i].id == id)
                {
                    if(b[i].issued == false)
                    {
                        b[i].issued = true;
                        cout << "Book Issued";
                    }
                    else
                    {
                        cout << "Book already issued";
                    }
                }
            }
        }

        else if(choice == 5)
        {
            int id;

            cout << "Enter Book ID: ";
            cin >> id;

            for(int i = 0; i < count; i++)
            {
                if(b[i].id == id)
                {
                    if(b[i].issued == true)
                    {
                        b[i].issued = false;
                        cout << "Book Returned";
                    }
                    else
                    {
                        cout << "Book was not issued";
                    }
                }
            }
        }

    } while(choice != 6);

    return 0;
}