#include <iostream>
using namespace std;
int main()
{
    int a,i,j,m,min,n;
    cout << "enter the size of array";
    cin >> n;
    int A[n];
    for(i=0;i<n;i++)
    {
cout << "enter the element of array " << i+1 << " :  ";
cin >> A[i];
    }
   m=A[0];
   min=A[0];
   for(i=0;i<n;i++)
    {
        if(A[i]>m)
        {
            m=A[i];
        }
     if (A[i]<min)
        {
            min=A[i];
        }
    }
    cout << "the largest element in the array is: " << m << endl;
    cout << "the smallest element in the array is: " << min << endl;
    return 0;
}
