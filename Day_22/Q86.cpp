#include <iostream>
using namespace std;

int main()
{
    string s;

    cout << "Enter a sentence: ";
    getline(cin, s);

    int words = 1;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            words++;
        }
    }

    cout << "Number of words = " << words;

    return 0;
}