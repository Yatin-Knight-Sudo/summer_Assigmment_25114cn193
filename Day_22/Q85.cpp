#include <iostream>
using namespace std;

int main()
{
    string s;
    
    cout << "Enter a string: ";
    cin >> s;

    int i;
    int j = s.size() - 1;
    int palindrome = 1;

    for(i = 0; i < j; i++, j--)
    {
        if(s[i] != s[j])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}