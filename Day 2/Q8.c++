#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num,s=0,t,k,c=0,u;
    cout << "Enter the number ";
    cin >> num;
k=num;u=num;

    while(num>0)
    {
        t=num%10;
        s=s*10+t;
        num=num/10;
        
    }
    if
    (u==s)
    {
        cout << "The number is a palindrome";
    }
    else
    {
        cout << "The number is not a palindrome";
    }
   

    return 0;
}