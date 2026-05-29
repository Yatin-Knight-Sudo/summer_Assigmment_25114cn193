#include <iostream>
using namespace std;
int main() {
    int num,s=1,t,k,c=0;
    cout << "Enter the number ";
    cin >> num;
k=num;

    while(num>0)
    {
        t=num%10;
        s=s*t;
        num=num/10;
        
    }
    cout << "Product of digits " << s;

    return 0;
}