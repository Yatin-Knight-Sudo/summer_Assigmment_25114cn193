#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n)
{
    int b;
    if (n==0||n==1)
    {
        return 1;
    }
    else 
    {
b=n*factorial(n-1);
return b;
    }


}
int main()

{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
return 0;
}