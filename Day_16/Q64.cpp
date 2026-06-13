#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int A[n];

    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Array after removing duplicates:\n";

    for(int i = 0; i < n; i++)
    {
        bool duplicate = false;

        // Check if A[i] appeared before
        for(int j = 0; j < i; j++)
        {
            if(A[i] == A[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            cout << A[i] << " ";
        }
    }

    return 0;
}