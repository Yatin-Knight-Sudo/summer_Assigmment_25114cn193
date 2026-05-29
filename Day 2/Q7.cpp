#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num,s=1,t,k,c=0,u;
    cout << "Enter the number ";
    cin >> num;



    while(num>0)
    {
        t=num%10;
        s=s*t;
        num=num/10;
        
    }
    cout<<"product of digits: "<<s <<endl;
   

    return 0;
}