#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    cout << "Common characters: ";

    for (int i = 0; i < s1.length(); i++)
    {
        bool printed = false;

        for (int k = 0; k < i; k++)
        {
            if (s1[i] == s1[k])
            {
                printed = true;
                break;
            }
        }

        if (printed)
        {
            continue;
        }

        for (int j = 0; j < s2.length(); j++)
        {
            if (s1[i] == s2[j])
            {
                cout << s1[i] << " ";
                break;
            }
        }
    }

    return 0;
}