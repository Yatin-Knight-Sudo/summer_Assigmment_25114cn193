#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Find Length\n";
        cout << "2. Convert to Uppercase\n";
        cout << "3. Convert to Lowercase\n";
        cout << "4. Reverse String\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Length = " << str.length() << endl;
        }
        else if (choice == 2)
        {
            string temp = str;

            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i] >= 'a' && temp[i] <= 'z')
                {
                    temp[i] = temp[i] - 32;
                }
            }

            cout << "Uppercase String: " << temp << endl;
        }
        else if (choice == 3)
        {
            string temp = str;

            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i] >= 'A' && temp[i] <= 'Z')
                {
                    temp[i] = temp[i] + 32;
                }
            }

            cout << "Lowercase String: " << temp << endl;
        }
        else if (choice == 4)
        {
            string temp = str;

            int start = 0;
            int end = temp.length() - 1;

            while (start < end)
            {
                char t = temp[start];
                temp[start] = temp[end];
                temp[end] = t;

                start++;
                end--;
            }

            cout << "Reversed String: " << temp << endl;
        }
        else if (choice == 5)
        {
            cout << "Program Ended." << endl;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}