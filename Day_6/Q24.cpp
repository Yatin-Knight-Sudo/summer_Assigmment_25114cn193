#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,x,i;
    cout << "enter the number of test cases\n";
    cin >> x;
    cout << "enter the number of time you want to process\n";
    cin >> n;
    long long res = 1;
for(i=1;i<=n;i++)
{
     res=res*x;
    
}
cout << "the result is " << res;
return 0;
}
