#include <bits/stdc++.h>

#define Pi 3.141592653589793
#define eps 1e-9
#define MAX int(1e9)
#define MIN int(-1e9)
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b,c) for(int i=a;i<b;i += c)
#define FORd(i,a,b,c) for(int i=a;i>=b;i -=c)
#define all(v) ((v).begin(),(v).end())
#define vi vector<int>
#define vii vector<vector<int> >
#define vI vector<ll>
#define vII vector<vector<ll> >
#define ll long long int //range -> 9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
#define ui unsigned int // range -> 0 to 4,294,967,295
#define ull unsigned long long
#define F first
#define S second
#define PB push_back
#define sz size()
#define InF  2147483647
#define READ freopen("input.txt", "r", stdin);
#define WRITE freopen("output.txt", "w", stdout);
#define fast_io ios_base::sync_with_stdio(false)
#define SQR(n) ((n)*(n))
#define MEM(a,val) memset(a,val,sizeof(a))
using namespace std;

int main(){
	fast_io;
	cin.tie(NULL);
	int n,m;
	cin >> n >> m ;
	vector < vector <char> > f(n,vector <char> (m));
	REP(i,n)REP(j,m) cin >> f[i][j];
	int rx,ry,rX=0,rY=0,bx,by,bX=0,bY=0,gx,gy,Gx=0,Gy=0;
	bool r=0,b=0,g=0;
	REP(i,n){
		REP(j,m){
			if(f[i][j]=='R'){
				if(!r){
					r=1;
					rx = i;
					ry = j;
					rX = i;
					rY = j;	
				}
				else if(i>rX || j > rY){
					rX = i;
					rY = j;
				}
			}
			else if(f[i][j]=='B'){
				if(!b){
					b=1;
					bx = i;
					by = j;
					bX = i;
					bY = j;
				}
				else if(i>bX || j > bY){
					bX = i;
					bY = j;
				}
			}
			else{
				if(!g){
					g=1;
					gx = i;
					gy = j;
					Gx = i;
					Gy = j;
				}
				else if(i>Gx || j > Gy){
					Gx = i;
					Gy = j;
				}
			}
		}
	}
	if(((rX-rx == bX-bx) && (Gx-gx == bX-bx)) && ((rY-ry == bY-by) && (Gy-gy == bY-by)))cout << "YES\n";
	else cout << "NO\n";

	return 0;
}