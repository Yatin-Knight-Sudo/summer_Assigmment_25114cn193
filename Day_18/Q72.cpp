#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] < v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    cout << "Array in descending order:\n";

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}