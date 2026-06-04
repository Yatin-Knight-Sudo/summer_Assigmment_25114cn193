#include <iostream>
using namespace std;
int main()
{
    int i,j,k; 
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            char ch;
            ch=(char)(j+64); // Convert number to corresponding uppercase letter
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
