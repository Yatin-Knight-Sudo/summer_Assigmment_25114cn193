#include <iostream>
using namespace std;
int main()

{
    int n,c=0,j ,i,d;
    cout << "enter the range of numbers\n";
    cin >>n;cin >> d;
    for(i=n;i<=d;i++)
    { c=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        c++;
        
    }
    if (c==2)
    {
        cout<<"\nthe number is prime number\n";
        cout <<i;
    }
}
return 0;
}