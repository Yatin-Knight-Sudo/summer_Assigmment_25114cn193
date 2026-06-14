#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int main()
{
	int i,s,a,b;
	cout << "enter the size of both arrays\n";
	cin >> a  ;
	 cin >> b;
vector<int> A(a);
vector<int> B(b);int l1=INT_MIN,l2=INT_MIN;
cout << "enter the elements of Ist array\n";
for(i=0;i<a;i++)
{
    cin >> A[i];
   if(l1<A[i])
   {
       l1=A[i];
   }
}
cout << "enter the elements of 2nd array\n";
for(i=0;i<b;i++)
{
    cin >> B[i];
    if(l2<B[i])
   {
       l2=B[i];
   }
}
 	int max;

if(l1>l2)
{
max=l1;
}
else
{
max=l2;
}
cout << "l1 = " << l1 << endl;
cout << "l2 = " << l2 << endl;
cout << "max = " << max << endl;
vector<int> C;
vector<int> hash(max+1,0);
	for(i=0; i<A.size(); i++)
	{
	    if(hash[A[i]]==0)
	    {
		C.push_back(A[i]);
		hash[A[i]]=1;
	    }
	}
		for(i=0; i<B.size(); i++)
	{
	    if(hash[B[i]]==0)
	    {
		C.push_back(B[i]);
		hash[B[i]]=1;
	    }
	}
	cout << "the union of both the arrays is\n";
	for(i=0;i<C.size();i++)
	{
	    cout  << C[i]  << " ";
	}
	return 0;
}
