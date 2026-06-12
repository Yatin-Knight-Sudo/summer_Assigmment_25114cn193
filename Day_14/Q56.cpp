#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;int i;
    cout << "enter the size of array\n";
    cin >> n;
    int A[n];
    int k=INT_MIN;
    for(i=0;i<n;i++)
    {
      cout << "enter the elenment\n";
      cin >> A[i];
      if(A[i]>k)
      {
          k=A[i];
      }
    }
    int hash[k+1]={0};
    for(i=0;i<n;i++)
    {
        hash[A[i]]+=1;
    }
    cout << "the duplicates are\n";
    for(i=0;i<n;i++)
    {
        
        if(hash[A[i]]>1 )
        {
            
            cout << A[i] << "frequency is" << hash[A[i]] <<  endl;
            hash[A[i]]=0;
            }
        }
    
    return 0;
}