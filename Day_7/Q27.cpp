#include <iostream>
#include <cmath>
using namespace std;
int sum( int n)
{
    int t,s=0;
    while(n>0)
    {
        t=n%10;
        s=s+t;
        n=n/10;
    }
    return s;
}
int main()
{
    int i,n,s;
    cout << "enter the number\n";
    cin >> n;
   s=sum(n);
    cout << "sum of digit is \n  "<< s;
return 0;
}

