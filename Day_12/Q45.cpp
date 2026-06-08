#include <iostream>
using namespace std;
int palindrome(int n)
{
    int rev=0;int t,j,k,l;
    t=n;
    while(t>0)
    {
        t=t%10;
        rev=rev*10+t;
        t=t/10;
    }
    if(rev==n)
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
    if(palindrome(n)==1)
    {
        cout << "the number is a palindrome \n";
    }
    else
    {
        cout << "the number is not a palindrome \n";
    }
        return 0;
}
