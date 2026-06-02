#include <iostream>
#include <cmath>
using namespace std;
int main()
{
long decimal=0;  long binary ;
int c=0;
cout << "enter a binarynumber";
cin >> binary;
while(binary>0)
{
    long k=binary%10;
    decimal=decimal+k*pow(2,c);
    c++;
    binary=binary/10;
}
cout << "decimal number is " << decimal;
}

