#include <bits/stdc++.h>

#define Pi 3.141592653589793
#define eps 1e-9
#define MAX int(1e9)
#define MIN int(-1e9)
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b,c) for(i=a;i<b;i += c)
#define FORd(i,a,b,c) for(int i=a;i>=b;i -=c)
#define all(v) ((v).begin(),(v).end())
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
	int n,m;
	cin >> n >> m;
	vector <string> a,b;
	string s1,s2;
	REP(i,m){
		cin >> s1 >> s2;
		a.PB(s1);
		b.PB(s2);
	}
	int i;
	while(n--){
		string s;
		cin >> s;
		i=0;
		FOR(i,0,m,1)if(s == a[i])break;
		if(a[i].length()>b[i].length())cout << b[i] << " ";
		else cout << a[i] << " ";
	}
	return 0;
}