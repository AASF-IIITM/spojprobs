#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast  ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
#define f0(i,a) for(i=0;i<a;i++)
const unsigned ll M = 1000000007;
#define N 101
ll a[N][N];
ll I[N][N];
void mul(ll A[][N],ll B[][N],ll dim){
  ll res[dim+1][dim+1];
  ll i,j,k;
  f1(i,dim){
    f1(j,dim){
        res[i][j]=0;
        f1(k,dim) {
            ll temp=((A[i][k]%M)*(B[k][j]%M))%M;
            res[i][j]=(temp+res[i][j])%M;
        }
    }
  }
  f1(i,dim) f1(j,dim) A[i][j]=res[i][j];
 
}
void print(ll A[][N],ll dim){
    ll i,j;
    f1(i,dim){
      f1(j,dim)
      cout<<A[i][j]<<" ";
     cout<<endl;
    }
}
void power(ll A[][N],ll dim,ll n){
    ll i,j;
  f1(i,dim){
    f1(j,dim){
      if(i==j) I[i][j]=1;
      else I[i][j]=0;
    }
  }
 
  while(n>0){
    if(n%2)
      mul(I,A,dim),n--;
      else
        mul(A,A,dim) , n/=2;
  }
  f1(i,dim) f1(j,dim) A[i][j]=I[i][j];
}
void solve(){
   ll dim,n,i,j;
   cin>>dim>>n;
 
   f1(i,dim) f1(j,dim) cin>>a[i][j];
   power(a,dim,n);
   print(a,dim);
}
int main(){
  fast;
  //solve;
  ll t;
  cin>>t;
   while(t--){
    solve();
   }
}
