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
#define vb vector<bool>
#define vbb vector<vector<bool> >
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
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define SQR(n) ((n)*(n))
#define MEM(a,val) memset(a,val,sizeof(a))
using namespace std;

bool f(vi a,int x){
    FOR(i,0,a.size(),1){
        if(a[i]==x)return true;
    }
    return false;
}

int main(){
	fast_io;
	int n,m;
	cin >> n >> m;
	vii graph(n+1);
	int a,b;
	REP(i,m){
	    cin >> a >> b;
	    graph[a].PB(b);
	    graph[b].PB(a);
	}
	int q;
	cin >> q;
	REP(i,q){
	    cin >> a >> b;
	    if(f(graph[a],b))cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}