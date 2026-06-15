#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = v[i];
        v[i] = v[minIndex];
        v[minIndex] = temp;
    }

    cout << "Sorted array:\n";

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}