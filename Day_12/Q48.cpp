#include <iostream>
using namespace std;

int perfect(int n)
{
    int c=0;int i,j,k,l;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c+=i;
        }
    }
    if(c==n)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    int n;
    cout << "enter a number \n";
    cin >> n;
    if(perfect(n)==1)
    {
        cout << "The number is a perfect number.\n";
    }
    else
    {
        cout << "The number is not a perfect number.\n";
    }
    return 0;
}