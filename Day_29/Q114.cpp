#include <iostream>
using namespace std;

int main()
{
    int n, choice, i, key;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum\n";
        cout << "3. Find Largest Element\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Array Elements: ";
                for(i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2:
            {
                int sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                cout << "Sum = " << sum << endl;
                break;
            }

            case 3:
            {
                int largest = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > largest)
                    {
                        largest = arr[i];
                    }
                }
                cout << "Largest Element = " << largest << endl;
                break;
            }

            case 4:
            {
                cout << "Enter element to search: ";
                cin >> key;

                int found = 0;

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        cout << "Element found at index " << i << endl;
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    cout << "Element not found\n";
                }

                break;
            }

            case 5:
                cout << "Program Ended\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 5);

    return 0;
}