#include <iostream>
#include <vector>
using namespace std;

struct Employee
{
    int id;
    string name;
    int age;
    double salary;
};

int main()
{
    vector<Employee> emp;
    int choice;

    do
    {
        cout << "\n1. Add Employee\n";
        cout << "2. View Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            Employee e;

            cout << "Enter ID: ";
            cin >> e.id;

            cout << "Enter Name: ";
            cin >> e.name;

            cout << "Enter Age: ";
            cin >> e.age;

            cout << "Enter Salary: ";
            cin >> e.salary;

            emp.push_back(e);
        }
        else if(choice == 2)
        {
            for(int i = 0; i < emp.size(); i++)
            {
                cout << "\nID: " << emp[i].id;
                cout << "\nName: " << emp[i].name;
                cout << "\nAge: " << emp[i].age;
                cout << "\nSalary: " << emp[i].salary << endl;
            }
        }
        else if(choice == 3)
        {
            int id;
            bool found = false;

            cout << "Enter ID to search: ";
            cin >> id;

            for(int i = 0; i < emp.size(); i++)
            {
                if(emp[i].id == id)
                {
                    cout << "\nID: " << emp[i].id;
                    cout << "\nName: " << emp[i].name;
                    cout << "\nAge: " << emp[i].age;
                    cout << "\nSalary: " << emp[i].salary << endl;

                    found = true;
                    break;
                }
            }

            if(found == false)
            {
                cout << "Employee not found";
            }
        }

    } while(choice != 4);

    return 0;
}