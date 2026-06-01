#include <iostream>
using namespace std;
int main()
{
    int i,k,j,n,c=0;
    cout << "enter number to check if it is perfect or not ";
    cin >> n;
    k=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+i;
            
        }
    }
    if(c==n)
    {
        cout << "the number is perfect" ;
    } 
    else 
    {
        cout << "number is not perfect";
    }
    return 0;

}