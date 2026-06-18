#include <iostream>
using namespace std;

int main()
{
    string s;
    
    cout << "Enter a string: ";
    getline(cin, s);

    int i = 0;
    int j = s.size() - 1;

    while(i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }

    cout << "Reversed string: " << s;

    return 0;
}