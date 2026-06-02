#include <iostream>
#include <cmath>
using namespace std;
int main()
{
long binary=0;  long num ;
int c=0;
cout << "enter a number\n";
cin >> num;
while(num>0)
{
    long k=num%2;
    binary=binary+k*pow(10,c);
    
    c++;
    num=num/2;
}
cout << "binary number is " << binary << endl;
c=0;
while(binary>0)
{
    long k=binary%10;
    if(k==1)
    {
        c++;
    }
    binary=binary/10;
}
cout << "number of set bits in binary representation is\n " << c;
}

