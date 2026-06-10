#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l;int n;
    cout << "enter the size of array";
    cin >> n;
    int A[n];
    for(i=0;i<n;i++)
    {
cout << "enter the element of array " << i+1 << " :  ";
cin >> A[i];
    }
    cout << "the array is \n" ;
     for(i=0;i<n;i++)
    {
cout << A[i] << endl;
    }

}