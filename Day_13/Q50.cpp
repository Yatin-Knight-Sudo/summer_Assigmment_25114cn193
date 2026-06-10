#include <iostream>
using namespace std;
int main()
{
    int i,j,k=0,l,n; double avg;
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
k=k+A[i];
    }
avg= (double)(k)/n;
    cout << "the sum of elements in the array is: " << k << endl;
    cout << "the average of elements in the array is: " << avg << endl;
} 