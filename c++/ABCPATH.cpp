#include <bits/stdc++.h>
using namespace std;
 
int rr[8]={-1,1,0,0,-1,-1,1,1};
int cc[8]={0,0,-1,1,-1,1,1,-1};
 
struct nod{
	int x,y,d;
	nod(){}
	nod(int x,int y,int d):x(x),y(y),d(d){}
};

int vis [51][51];
int bfs(int x,int y,vector<string> f) {
	int z=1;
	queue<nod> q;
 
	q.push(nod(x,y,1));
	nod t;
	vis[x][y]=1;
 
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		for(int i=0;i<8;i++)
		{
			int r=t.x+rr[i];
			int c=t.y+cc[i];
			if(r>=0 && r<f.size() && c>=0 && c<f[0].size() && vis[r][c]==0)
			{
				if(int(f[r][c])==int(f[t.x][t.y])+1)
				{
					vis[r][c]=1;
				q.push(nod(r,c,t.d+1));
				if(t.d+1>z)
				z=t.d+1;
				}
			}
		}
	}
	return z;
}
 
int pro(int h,int w,vector<string> f) {
	int x=0;
	for(int i=0;i<h;i++)
	for(int j=0;j<w;j++)
	if(f[i][j]=='A' && vis[i][j]==0)
	x=max(x,bfs(i,j,f));
	return x;
}
 
int main() {
	// your code goes here
	int h, w, l = 1;
	cin >> h >> w;
	while(h != 0) {
		string s;
		vector<string> f;
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
		 		vis[i][j]=0;
		for(int i=0;i<h;i++) {
			cin>>s;
			f.push_back(s);
		}
		cout<<"Case "<<l<<": "<<pro(h, w,f)<<endl;
		l++;
		cin>>h>>w;
	}
	return 0;
}
