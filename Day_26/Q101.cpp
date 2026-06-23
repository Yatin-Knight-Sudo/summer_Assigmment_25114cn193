#include <iostream>
using namespace std;
int main()
{
    int i,j,c=0;
    cout << "you will be given 5 chances to guesss the number\n ";                            int k=40;
    int n;
    
    for(i=1;i<=5;i++)
    {
        cout << "enter the number \n";
        cin >> n;
        if(n==k)
        {
            cout << "hurray ! , you guessed it right\n";
        }
        else if (n>(k+10))
        {
            cout << "number is too high\n";
        }
        else if (n>k && n<=(k+10))
        {
            cout << "number is high but you are near\n";
        }
        else if (n<(k+10))
        {
            cout << "number is too low \n";
        }
        else if (n>=(k-10) && n<k)
        {
            cout << "number is low but you are near\n";
        }
    }
    return 0;

}
