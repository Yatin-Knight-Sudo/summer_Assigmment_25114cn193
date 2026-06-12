#include <iostream>
using namespace std;
void revarr(int arr[],int f,int l)
{
    int i,j;
    for(i=f,j=l;i<j;i++,j--)
    {
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
    }
}
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
    cout << "enter by how many time you want to rotate array by right\n";
    cin >> k;
    revarr(A,n-k,n-1);
    revarr(A,0,n-k-1);
    revarr(A,0,n-1);
for(i=0;i<n;i++)
{
    cout << A[i] << " ";
}

}