#include <bits/stdc++.h>
using namespace std;
int xx[]={-2,-2,-1,-1,1,1,2,2};
int yy[]={-1,1,-2,2,-2,2,-1,1};
int n=8;
struct nod
{
	int x,y,d;
	nod(){}
	nod(int x,int y,int d):x(x),y(y),d(d){}
};
int min_moves(int sx,int sy,int dx,int dy)
{
	bool vis[n+1][n+1];
	for(int i=0;i<=8;i++)
	for(int j=0;j<=8;j++)
	vis[i][j]=false;
	vis[sx][sy]=true;
	nod t;
	int l,m;
	queue<nod> q;
	q.push(nod(sx,sy,0));
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		if(t.x==dx && t.y==dy)
		return t.d;
		for(int i=0;i<8;i++)
		{
			l=t.x+xx[i];
			m=t.y+yy[i];
			if(l>=1 && l<=8 && m>=1 && m<=8 &&!vis[l][m])
			{
				vis[l][m]=true;
				q.push(nod(l,m,t.d+1));
			}
		}
	}
}

int main() {
	
	// your code here
	int t;
	cin>>t;
	while(t--)
	{
		string s,d;
		cin>>s>>d;
		int sx,sy,dx,dy;
		sx=s[0]-'a'+1;
		sy=s[1]-'0';
		dx=d[0]-'a'+1;
		dy=d[1]-'0';
		int z=min_moves(sx,sy,dx,dy);
		cout<<z<<endl;
	}
	return 0;
}
