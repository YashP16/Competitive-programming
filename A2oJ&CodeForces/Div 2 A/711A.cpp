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
	int n;
	cin >> n;
	vector < pair<string,string> > b(n);
	
	string s;
	bool flag = 0;
	
	REP(i,n){
		cin >> s;
		b[i].F = s.substr(0,2);
		b[i].S = s.substr(3,2);
		if(!flag && b[i].F=="OO"){
			b[i].F = "++";
			flag =1;
		}
		else if(!flag && b[i].S=="OO"){
			b[i].S = "++";
			flag =1;
		}
	}
	if(flag){
		cout << "YES\n";
		REP(i,n)cout << b[i].F << "|"<<b[i].S << "\n";
	}
	else cout << "NO\n";

	return 0;
}