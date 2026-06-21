#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    char maxChar;
    int maxCount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int count = 0;

        for (int j = 0; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxChar = s[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxCount;

    return 0;
}