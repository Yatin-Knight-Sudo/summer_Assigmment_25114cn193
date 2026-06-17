#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> columns;

    vector<vector<int>> A(rows, vector<int>(columns));

    cout << "Enter the matrix:\n";

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < rows; i++)
    {
        int sum = 0;

        for(int j = 0; j < columns; j++)
        {
            sum = sum + A[i][j];
        }

        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}