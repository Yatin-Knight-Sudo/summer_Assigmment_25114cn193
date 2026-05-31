#include <iostream>
using namespace std;
int main ()
{
    int n,t,c=0 ,i,k,l;
    cout << "enter the numer to check if it is a armstrong number or not: ";
    cin >> n;
    t=n;
while(t>0)
{
    k=t%10;
    c=c+k*k*k;
    t=t/10;
}
if (c==n)
    cout << n << " is an armstrong number." << endl;
else
    cout << n << " is not an armstrong number." << endl;
return 0;
}