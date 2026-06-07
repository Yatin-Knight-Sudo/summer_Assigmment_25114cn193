#include <iostream>
using namespace std;
int prime(int n)
{
    int flag=0;
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
        
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout << "enter a number to check if it is prime or not \n";
    cin >> n;
     int a=prime(n);
     if(a==1)
     {
        cout << n << "\nis a prime number \n";
     }
     else 
     cout << n << "\nis not a prime number \n";
     return 0;
}