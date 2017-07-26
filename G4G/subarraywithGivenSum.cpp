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
	int t,n,v;
	cin >> t;
	while(t--){
	    cin >> n >> v;
	    vi a(n);
	    REP(i,n)cin >> a[i];
	    
	    int ps = a[0];
	    int pos  = 0;
	    bool flag =0;
	    
	    int l ; 
	    FOR(i,1,n,1){
	        ps += a[i];
	        if(ps == v){
	            flag = 1;
	            l = i;
	            break;
	        }
	        else if(ps>v){
    	        while(ps>v && pos<=i){
    	            ps -= a[pos];
    	            pos++;
    	        }
	        }
	    }
	    if(flag)cout << pos +1 << " " << l+1 <<"\n";
	    else cout << -1 << "\n";
	    
	}
	return 0;
}
