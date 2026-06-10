#include <iostream>
using namespace std;
int main()
{
    int a,i,j,ce=0,co=0;int n;;
    cout << "enter the size of array";
    cin >> n;
    int A[n];
    for(i=0;i<n;i++)
    {
cout << "enter the element of array " << i+1 << " :  ";
cin >> A[i];
    }
   for(i=0;i<n;i++)
    {
        if(A[i]%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    cout << "the number of even elements in the array is: " << ce << endl;
    cout << "the number of odd elements in the array is: " << co << endl;
    return 0;
}
