#include<bits/stdc++.h>
using namespace std;
#define ll long long
template <typename Arg1>
//print with endl
void pn(Arg1&& arg1)
{ cout<<arg1<<"\n";}
template <typename Arg1, typename... Args>
void pn(Arg1&& arg1, Args&&... args)
{ cout<<arg1<<"\n"; pn(args...); }
 //print with space
template <typename Arg1>
void ps(Arg1&& arg1)
{ cout<<arg1<<" ";}
template <typename Arg1, typename... Args>
void ps(Arg1&& arg1, Args&&... args)
{ cout<<arg1<<" "; ps(args...); }
 
template <typename Arg1>
void pvs(Arg1&& arg1, ll n)
{ for(ll i=0;i<n;i++)ps(arg1[i]); }
template <typename Arg1>
void pvn(Arg1&& arg1, ll n)
{ for(ll i=0;i<n;i++)pn(arg1[i]); }

#define fast  ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define vi vector <int>
#define vll vector <long long>
#define f0(i,a) for(i=0;i<a;i++)
#define sz(a) a.size()
#define Y               "YES"
#define N               "NO"
const unsigned int M = 1000000007; 
vi ar[10001];
int vis[10001];
void dfs(int node){
  vis[node]=1;
  for(int child : ar[node]){
    if(vis[child]==0){
      dfs(child);
    }
  }
}
void solve(){
    
    int n,m,i;
    cin>>n>>m;
    f0(i,m){
      int x,y;
      cin>>x>>y;
      ar[x].pb(y),ar[y].pb(x);
    }
    if(m!=n-1){
      pn(N);
      return ;
    }
    int c=0;
    f1(i,n){
      if(vis[i]==0){
        dfs(i);
        c++;
      }
    }
    if(c==1){
      pn(Y);
    }
    else{
      pn(N);
    }
 
}
int main(){
  fast;
   solve();
  // ll t;
  // cin>>t;
  //  while(t--){
  //   solve();
  //  } 
}
