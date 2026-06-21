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

    if (s1.length() != s2.length())
    {
        cout << "Not Anagrams";
        return 0;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        int count1 = 0;
        int count2 = 0;

        for (int j = 0; j < s1.length(); j++)
        {
            if (s1[i] == s1[j])
            {
                count1++;
            }

            if (s1[i] == s2[j])
            {
                count2++;
            }
        }

        if (count1 != count2)
        {
            cout << "Not Anagrams";
            return 0;
        }
    }

    cout << "Anagrams";

    return 0;
}