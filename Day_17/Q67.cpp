#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

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
 	int m;

if(l1>l2)
{
m=l1;
}
else
{
m=l2;
}
cout << "l1 = " << l1 << endl;
cout << "l2 = " << l2 << endl;
cout << "max = " << m << endl;int j;
vector<int> C;int h=max(a,b);
vector<int> hash(m+1,0);
i=0,j=0;
for(i=0;i<a;i++)
{
    for(j=0;j<b;j++)
    {
        if(A[i]==B[j])
        {
        if( hash[A[i]]==0)
        {
            C.push_back(A[i]);
         hash[A[i]]=1 ; hash[B[j]]=1;
        }
    }
}
}
	
		
	cout << "the intersection of both the arrays is\n";
	for(i=0;i<C.size();i++)
	{
	    cout  << C[i]  << " ";
	}
	return 0;
}
