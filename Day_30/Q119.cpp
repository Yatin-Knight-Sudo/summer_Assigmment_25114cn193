#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i, choice;

    cout << "Enter the number of employees: ";
    cin >> n;
    cin.ignore();

    int id[100];
    string name[100];
    string department[100];
    float salary[100];

    for (i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> id[i];
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name[i]);

        cout << "Enter Department: ";
        getline(cin, department[i]);

        cout << "Enter Salary: ";
        cin >> salary[i];
        cin.ignore();
    }

    do
    {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Display All Employees" << endl;
        cout << "2. Search Employee by ID" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            cout << "\nEmployee Records\n";

            for (i = 0; i < n; i++)
            {
                cout << "\nEmployee " << i + 1 << endl;
                cout << "ID: " << id[i] << endl;
                cout << "Name: " << name[i] << endl;
                cout << "Department: " << department[i] << endl;
                cout << "Salary: " << salary[i] << endl;
            }
        }
        else if (choice == 2)
        {
            int searchId;
            int found = 0;

            cout << "Enter Employee ID: ";
            cin >> searchId;

            for (i = 0; i < n; i++)
            {
                if (id[i] == searchId)
                {
                    cout << "\nEmployee Found!" << endl;
                    cout << "ID: " << id[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Department: " << department[i] << endl;
                    cout << "Salary: " << salary[i] << endl;
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                cout << "Employee not found." << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting Program..." << endl;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}