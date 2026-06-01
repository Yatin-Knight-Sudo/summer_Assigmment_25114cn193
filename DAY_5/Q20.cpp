#include <iostream>
using namespace std;

int main() 
{
    // Initialize s = 0 to make sure it starts at a clean value
    int i, j, n, s = 0, c = 0; 
    
    cout << "enter the number whose largest prime factor is to be found: ";
    cin >> n;

    for(i = 1; i <=n; i++)
    {
        if(n % i == 0) // Step 1: Check if 'i' is a factor of 'n'
        {
            c = 0; // Reset divisor count for 'i'
            
            for(j = 1; j <= i; j++) // Step 2: Check how many divisors 'i' has
            {
                if(i % j == 0)
                {
                    c++;
                }
            }
            
            if(c == 2) // Step 3: If exactly 2 divisors, 'i' is prime
            {
                if(i > s) // Step 4: Track the largest prime factor
                {
                    s = i;
                }
            }
        }
    } // Main loop ends safely here

    cout << "largest prime factor is " << s << "\n";
    
    return 0;
}