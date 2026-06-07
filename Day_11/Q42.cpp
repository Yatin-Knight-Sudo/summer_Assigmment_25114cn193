#include <iostream>
using namespace std;
int maxofarr(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int n ;
    cout << " enter the size of array:\n ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cout << "element  " << i+1 << " ";
        cin >> arr[i];
    }
    cout << "maximum element in array is: " << maxofarr(arr,n) << endl;
    return 0;
}