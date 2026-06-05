#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            char ch=(char)(i+64);
            cout<<ch;
        }
        cout<<endl;
    }
}