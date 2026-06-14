#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int i,s;
  vector<int> A={1,2,3,4,5,6};
  vector<int> B={8,9,10,11};
   
  vector<int> C;
  for(i=0;i<A.size();i++)
  {
    C.push_back(A[i]);    
}
for(i=0;i<B.size();i++)
{
    C.push_back(B[i]);
}
cout << "the merged array is\n";
for(i=0;i<C.size();i++)
{
    cout  << " " << C[i];
}
return 0;
}
