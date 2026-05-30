#include <iostream>
using namespace std;
int main()

{
    int n,c=0 ,i,d;
    cout << "enter the number";
    cin >>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
        
    }
    if (c==2)
    {
        cout<<"the number is prime number";
    }
    else
    {
        cout<<"the number is not a prime number";
    }
return 0;
}