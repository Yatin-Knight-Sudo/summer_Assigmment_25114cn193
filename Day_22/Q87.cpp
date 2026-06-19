#include <iostream>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    for(int i = 0; i < s.size(); i++)
    {
        int count = 1;

        if(s[i] == '*')
        {
            continue;
        }

        for(int j = i + 1; j < s.size(); j++)
        {
            if(s[i] == s[j])
            {
                count++;
                s[j] = '*';
            }
        }

        cout << s[i] << " = " << count << endl;
    }

    return 0;
}