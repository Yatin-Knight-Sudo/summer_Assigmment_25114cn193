#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;
};

int main()
{
    Student s[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n1. Add Student";
        cout << "\n2. Generate Marksheet";
        cout << "\n3. View All Students";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Roll No: ";
            cin >> s[count].rollNo;

            cout << "Enter Name: ";
            cin >> s[count].name;

            cout << "Enter Marks in Subject 1: ";
            cin >> s[count].marks1;

            cout << "Enter Marks in Subject 2: ";
            cin >> s[count].marks2;

            cout << "Enter Marks in Subject 3: ";
            cin >> s[count].marks3;

            count++;
        }

        else if(choice == 2)
        {
            int roll;
            bool found = false;

            cout << "Enter Roll No: ";
            cin >> roll;

            for(int i = 0; i < count; i++)
            {
                if(s[i].rollNo == roll)
                {
                    int total = s[i].marks1 + s[i].marks2 + s[i].marks3;
                    double percentage = total / 3.0;

                    char grade;

                    if(percentage >= 90)
                        grade = 'A';
                    else if(percentage >= 75)
                        grade = 'B';
                    else if(percentage >= 60)
                        grade = 'C';
                    else if(percentage >= 40)
                        grade = 'D';
                    else
                        grade = 'F';

                    cout << "\n----- MARKSHEET -----\n";
                    cout << "Roll No: " << s[i].rollNo << endl;
                    cout << "Name: " << s[i].name << endl;
                    cout << "Subject 1: " << s[i].marks1 << endl;
                    cout << "Subject 2: " << s[i].marks2 << endl;
                    cout << "Subject 3: " << s[i].marks3 << endl;
                    cout << "Total: " << total << endl;
                    cout << "Percentage: " << percentage << "%" << endl;
                    cout << "Grade: " << grade << endl;

                    found = true;
                    break;
                }
            }

            if(found == false)
            {
                cout << "Student not found";
            }
        }

        else if(choice == 3)
        {
            for(int i = 0; i < count; i++)
            {
                cout << "\nRoll No: " << s[i].rollNo;
                cout << "\nName: " << s[i].name;
                cout << "\nMarks: "
                     << s[i].marks1 << " "
                     << s[i].marks2 << " "
                     << s[i].marks3 << endl;
            }
        }

    } while(choice != 4);

    return 0;
}