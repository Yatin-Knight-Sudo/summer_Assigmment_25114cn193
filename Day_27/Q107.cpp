#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    double basicSalary;
};

int main()
{
    Employee emp[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n1. Add Employee";
        cout << "\n2. View Employees";
        cout << "\n3. Calculate Salary";
        cout << "\n4. Search Employee";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter ID: ";
            cin >> emp[count].id;

            cout << "Enter Name: ";
            cin >> emp[count].name;

            cout << "Enter Basic Salary: ";
            cin >> emp[count].basicSalary;

            count++;
        }

        else if(choice == 2)
        {
            for(int i = 0; i < count; i++)
            {
                cout << "\nID: " << emp[i].id;
                cout << "\nName: " << emp[i].name;
                cout << "\nBasic Salary: " << emp[i].basicSalary;
                cout << endl;
            }
        }

        else if(choice == 3)
        {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            for(int i = 0; i < count; i++)
            {
                if(emp[i].id == id)
                {
                    double hra = 0.20 * emp[i].basicSalary;
                    double da = 0.10 * emp[i].basicSalary;
                    double netSalary = emp[i].basicSalary + hra + da;

                    cout << "\nEmployee: " << emp[i].name;
                    cout << "\nBasic Salary: " << emp[i].basicSalary;
                    cout << "\nHRA: " << hra;
                    cout << "\nDA: " << da;
                    cout << "\nNet Salary: " << netSalary << endl;
                }
            }
        }

        else if(choice == 4)
        {
            int id;
            bool found = false;

            cout << "Enter Employee ID: ";
            cin >> id;

            for(int i = 0; i < count; i++)
            {
                if(emp[i].id == id)
                {
                    cout << "\nID: " << emp[i].id;
                    cout << "\nName: " << emp[i].name;
                    cout << "\nBasic Salary: " << emp[i].basicSalary << endl;

                    found = true;
                    break;
                }
            }

            if(found == false)
            {
                cout << "Employee not found";
            }
        }

    } while(choice != 5);

    return 0;
}