#include <iostream>
using namespace std;
int main()
{
int t,k,i,j,n,s=0,c=0;
   cout << "enter the number whose factors are to de done";
   cin >> n;
   for(i=1;i<n;i++)
   {
         if(n%i==0)
         {
         cout << i << " \n";
   }

   }
   return 0;
}