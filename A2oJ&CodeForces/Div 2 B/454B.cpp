#include <bits/stdc++.h>

#define Pi 3.141592653589793
#define eps 1e-9
#define MAX int(1e9)
#define MIN int(-1e9)
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b,c) for(int i=a;i<b;i += c)
#define FORd(i,a,b,c) for(int i=a;i>=b;i -=c)
#define all(v) ((v).begin(),(v).end())
#define InAr(v,n) REP(i,n)cin >> v[i]
#define vi vector<ll>
#define vii vector<vector<ll> >
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
	int n ;
	cin >> n;
	int v[n];
	InAr(v,n);
	int c=min_element(v,v+n) - v;
	int count = 1;
	if(c == 0){
		int x= n-1;
		while(v[x]==v[0] && x>c){
			x--;
		}
		if(x==0){
			cout << 0 << "\n";
			return 0;
		}
		c = x+1;
	}

	while(count!=n){
		if(v[(c+count)%n] >= v[(c+count-1)%n])count++;
		else{
			cout << -1 << "\n";
			return 0;
		}
	}
	if(c == 0)cout << 0 << "\n";
	else cout << n - c << "\n";

	return 0;
}