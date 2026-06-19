#include <iostream>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    string result = "";

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {
            result = result + s[i];
        }
    }

    cout << "String without spaces: " << result;

    return 0;
}