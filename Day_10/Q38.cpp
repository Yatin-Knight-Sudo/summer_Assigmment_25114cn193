
#include <iostream>
using namespace std;
int main()
{
int i,j,k,l;int c=0;int c1=0;
for(i=1;i<=5;i++)
{
    for (k=0;k<=c;k++)
    {
        cout << " ";
    }
    for(j=1;j<=5-c1;j++)
    {
        cout << "*";
    }c++;
    for(l=4;l>c1;l--)
    {
        cout << "*";
    }c1++;
    cout << "\n";
}
return 0;
}