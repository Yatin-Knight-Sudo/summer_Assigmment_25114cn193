#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of matrix: ";
    cin >> n;

    vector<vector<int>> A(n, vector<int>(n));

    cout << "Enter the matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    bool symmetric = true;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(A[i][j] != A[j][i])
            {
                symmetric = false;
            }
        }
    }

    if(symmetric)
    {
        cout << "Symmetric Matrix";
    }
    else
    {
        cout << "Not a Symmetric Matrix";
    }

    return 0;
}