#include <iostream>
#include <cmath>
using namespace std;
int armstrong(int n)
{
    int i,j,k=0,l;
    int t=n;int c=0;
    while(n>0)
    {
    
        c++;
        n=n/10;
    }
    n=t;
    while(n>0)
    {
        l=n%10;
        k=k+pow(l,c);
        n=n/10;
    }
    if(t==k)
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
    cout << "enter a  number \n";
    cin >> n;
    if(armstrong(n)==1)
    {
        cout << "the number is armstrong\n";
    }
    else 
    {
        cout << "the number is not an armstrong\n";
    }
    return 0;
}