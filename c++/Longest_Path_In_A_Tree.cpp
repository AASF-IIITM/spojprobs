#include<bits/stdc++.h>
using namespace std;
#define fast  ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define modu 1000000007
#define pb push_back
#define vi vector <int>
#define vll vector <long long>
#define f0(i,a) for(i=0;i<a;i++)
const unsigned int M = 1000000007;
vi ar[100001];
int vis[100001];
int maxD,maxNode;
void dfs(int node,int d){
   vis[node]=1;
   if(d>maxD){
      maxD=d;
      maxNode=node;
   }
   for(int child : ar[node]){
   	if(vis[child]==0)
   		dfs(child,d+1);
   	
   } 	
}
int main(){
	fast;
    int n,x,y;
    cin>>n;
   
    for(int i=0;i<n-1;i++){
        cin>>x>>y;
        ar[x].pb(y);
        ar[y].pb(x);
    }
     maxD=-1;
     dfs(1,0);
     for(int i=1;i<=n;i++) vis[i]=0;
     maxD=-1;
     dfs(maxNode,0);
     cout<<maxD;
     
 }
 
