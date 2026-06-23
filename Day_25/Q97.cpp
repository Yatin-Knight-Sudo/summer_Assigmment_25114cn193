#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> a(n1);

    cout << "Enter elements of first sorted array:\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> b(n2);

    cout << "Enter elements of second sorted array:\n";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    vector<int> c;
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            c.push_back(a[i]);
            i++;
        }
        else
        {
            c.push_back(b[j]);
            j++;
        }
    }

    while (i < n1)
    {
        c.push_back(a[i]);
        i++;
    }

    while (j < n2)
    {
        c.push_back(b[j]);
        j++;
    }

    cout << "Merged array:\n";

    for (int k = 0; k < c.size(); k++)
    {
        cout << c[k] << " ";
    }

    return 0;
}