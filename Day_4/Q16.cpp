#include <iostream>
using namespace std;
int main ()
{
    int n,t,c=0 ,i,k,l;
    cout << "enter the range till when to check if it is a armstrong number or not: ";
    cin >> n;
    t=n;
    for(i=1;i<=n;i++)
    { c=0;
        t=i;
while(t>0)
{
    k=t%10;
    c=c+k*k*k;
    t=t/10;
}
if (c==i)
    cout << i << " is an armstrong number." << endl;
}
return 0;
}