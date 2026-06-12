#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "enter the size of array" << endl;
    cin >> n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cout << "enter the element" << i+1 << endl;
        cin >> A[i];
    }
    int p;int k=A[0];
    for(i=0;i<n;i++)
    {
        if(k<A[i])
        {
            k=A[i];p=i;
        }
    }
    A[p]=0;k=A[0];int c=0;
    for(i=0;i<n;i++)
    {
        if(k<A[i])
        {
            c=i;
        }
    }
    cout << "the second largest element is" << " " << A[c];
}