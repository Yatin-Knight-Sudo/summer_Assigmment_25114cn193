#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i,j,l;
    int n;

    cout << "enter the size of array\n";
    cin >> n;
    vector<int> v(n);
    cout << "enter the elements of array\n";
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    cout << "the element which you want to find\n";
    int k;
    cin >> k;
    for(i=0;i<n;i++)
    {
        if(k==v[i])
        {
            cout << "number found at position " << i+1 <<  " ";break;
        }
    }
    return 0;
}