#include <iostream>
using namespace std;
int main()
{
    
    int n;int i,j,k;
    cout << "enter the size of aarray\n";
    cin >> n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cout <<" enter the element "  << i+1 << endl;
        cin >> A[i];
    }
    cout << "the reverse of this arry is\n";
    for(i=n-1;i>=0;i--)
    {
        cout << A[i] << " ";
    }
    return 0;
}
