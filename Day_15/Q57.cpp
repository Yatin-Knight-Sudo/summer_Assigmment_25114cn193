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
    cout << "enter the element to be searched\n";
    cin >> k;int c=0;    
    for(i=0;i<n;i++)
    {
        if(A[i]==k)
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        cout << "position of element is " << i+1;c++;
    }
    else 
    {
        cout << "the number not found";
    }
return 0;
}