#include <iostream>
using namespace std;
int main()
{
	int j,k;string voter;int age;
    cout << "Enter Yes if you have voter id and No if you doesnt have voter id ";
     cin >> voter;
    if(voter=="Yes")
     {
          cout << "enter your age";
     cin >> age;
         if (age>=18)
         {
             cout << "u are eligible for voting";
         }
         else 
         {
             cout << "you are under age for voting";
         }
     }
     
     else if (voter == "No")
     {
          cout << "enter your age";
     cin >> age;
     
         if(age>=18)
         {
             cout << "prepare your voter id from zonal incharge";
         }
         else 
         {cout << "you are under age for voting";}
     }
     else 
     {
         cout << "invalid input";
     }

return 0;
}