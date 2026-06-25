#include <iostream>
using namespace std;

struct Show
{
    int id;
    string name;
    int seats;
};

int main()
{
    Show s[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n1. Add Show";
        cout << "\n2. View Shows";
        cout << "\n3. Book Ticket";
        cout << "\n4. Check Available Seats";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Show ID: ";
            cin >> s[count].id;

            cout << "Enter Show Name: ";
            cin >> s[count].name;

            cout << "Enter Total Seats: ";
            cin >> s[count].seats;

            count++;
        }

        else if(choice == 2)
        {
            for(int i = 0; i < count; i++)
            {
                cout << "\nShow ID: " << s[i].id;
                cout << "\nShow Name: " << s[i].name;
                cout << "\nAvailable Seats: " << s[i].seats;
                cout << endl;
            }
        }

        else if(choice == 3)
        {
            int id, tickets;

            cout << "Enter Show ID: ";
            cin >> id;

            cout << "Enter Number of Tickets: ";
            cin >> tickets;

            for(int i = 0; i < count; i++)
            {
                if(s[i].id == id)
                {
                    if(s[i].seats >= tickets)
                    {
                        s[i].seats = s[i].seats - tickets;
                        cout << "Ticket Booked Successfully";
                    }
                    else
                    {
                        cout << "Not Enough Seats Available";
                    }
                }
            }
        }

        else if(choice == 4)
        {
            int id;

            cout << "Enter Show ID: ";
            cin >> id;

            for(int i = 0; i < count; i++)
            {
                if(s[i].id == id)
                {
                    cout << "Available Seats: " << s[i].seats;
                }
            }
        }

    } while(choice != 5);

    return 0;
}