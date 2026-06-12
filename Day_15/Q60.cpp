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
    int B[n];
    for(i=0,j=0;i<n;i++)
    {
if(A[i]!=0)
{
B[j]=A[i];
j++;
}
    }
int p;
for(i=0,p=j;i<n;i++)
{
    if(A[i]==0)
    {
        B[p]=0;
        p++;
    }
}
cout << "the new array is\n";
for(i=0;i<n;i++)
{
    cout << B[i] << " ";
}
return 0;
    }
