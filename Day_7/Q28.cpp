#include <iostream>
#include <cmath>
using namespace std;
int rev( int n)
{
    int t,r=0,c=0;
    
    while(n>0)
    {
        t=n%10;
        r=r*10+(t);
        c++;
        n=n/10;
    }
    return r;
}
int main()
{
    int i,n,rv;
    cout << "enter the number\n";
    cin >> n;
   rv=rev(n);
    cout << "reverse of number is \n  "<< rv;
return 0;
}

