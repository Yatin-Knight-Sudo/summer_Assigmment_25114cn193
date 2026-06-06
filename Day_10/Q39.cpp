
#include <iostream>
using namespace std;
int main()
{
int i,j,k,l;int c=4;int c1=0;
for(i=1;i<=5;i++)
{
    for (k=c;k>=0;k--)
    {
        cout << " ";
    }
    for(j=1;j<=i;j++)
    {
        cout << j;
    }c--;
    for(l=i-1;l>=1;l--)
    {
        cout << l;
    }
    cout << "\n";
}
return 0;
}