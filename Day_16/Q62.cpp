#include <iostream>
#include <vector>
using namespace std;
int maxFreq(vector<int>& arr) {
    int n = arr.size();
    int maxc = 0;
    int mostfreqelement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        
    
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    
        if (count > maxc) {
            maxc = count;
            mostfreqelement = arr[i];
        }
    }

    return mostfreqelement;
}

int main() {
    vector<int> arr = {1, 3, 2, 1, 4, 1, 3, 3, 3};
    
    int result = maxFreq(arr);
cout << "Most frequent element: " << result << endl;
    
    return 0;
}