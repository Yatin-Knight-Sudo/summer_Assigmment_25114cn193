#include <iostream>
using namespace std;
int main()
{
    int t,k,j,n,s=0,c=0;
    cout << "enter number to check if it is strong or not ";
    cin >> n;
    k=n;
    while(k>0)
    {c=1;
        t=k%10;
        k=k/10;
            for(j=1;j<=t;j++)
            {
                c=c*j;
            }
            s=s+c;
    }

    
    if(s==n)
    {
        cout << "the number is strong" << n ;
    } 
    else 
    {
        cout << "the number is not strong" << n ;
    }

    return 0;

}