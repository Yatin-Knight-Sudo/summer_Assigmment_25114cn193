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

    int sum;
    cout << "Enter the required sum: ";
    cin >> sum;

    bool found = false;

    // Check every pair
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(A[i] + A[j] == sum)
            {
                cout << A[i] << " + " << A[j]
                     << " = " << sum << endl;
                found = true;
            }
        }
    }

    if(found == false)
    {
        cout << "No pair found.";
    }

    return 0;
}