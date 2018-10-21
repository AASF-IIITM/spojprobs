#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n,k,count=0;
	cin>>n>>k;
	vector<long long> a(n);
	for(long long i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(long long i=0;i<n;i++)
	{
		if(binary_search(a.begin(),a.end(),a[i]+k))
		{
			count++;
		}
	}
	cout<<count;
	
	return 0;
} 
