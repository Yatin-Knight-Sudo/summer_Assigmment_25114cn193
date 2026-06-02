#include <iostream>
#include <cmath>
using namespace std;
int main()
{
long binary=0;  long decimal ;
int c=0;
cout << "enter a decimal number";
cin >> decimal;
while(decimal>0)
{
    long k=decimal%2;
    binary=binary+k*pow(10,c);
    c++;
    decimal=decimal/2;
}
cout << "binary number is " << binary;
}

