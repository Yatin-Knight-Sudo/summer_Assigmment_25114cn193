#include <iostream>
#include <climits>
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
    int p;int k=INT_MIN;int f=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(k<A[i])
        {
            f=k;
            k=A[i];p=i;
        }// if current element is smaller than largest but greatee than second largest
        else if(f<A[i] && A[i]!=k)
        {
            f=A[i];
        }
    }
   cout << "the second largest element is" << " " << f;
   return 0;
}