#include <iostream>
using namespace std;
int main ()
{
    int n,i,t1=0,t2=1,c;
    i=0 ;
    while(i<5)

    {
     cout << t1 << " ";
     c=t1+t2;
     
     
     t1=t2;
     t2=c;
     i++;
    }

    return 0;

}