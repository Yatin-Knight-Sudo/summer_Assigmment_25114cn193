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
    cout << "enter the element whose frequency is to be found \n";
    int k;
    cin >> k;
    int c=0;int p;
    for(i=0;i<n;i++)
    {
        if(k==A[i])
        {
            c++;
        }
    }
    cout << "the frequency of element" << " " << k << "is" << c;
}