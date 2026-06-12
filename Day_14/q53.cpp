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
    cout << "enter the element to be searched" << endl;
    int key;
    cin >> key;
    for(i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            int t=key;
            cout << "element found at position" << i+1 << endl;
            break;
        }
    }
    return 0;
}