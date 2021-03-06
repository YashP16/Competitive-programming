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
	
int findPos (vector <pair <int,int> > l,int left,int right,int x){
    if(left<= right){
        int mid = (left+right)/2;
        if(x<l[mid].F) return findPos(l,left,mid-1,x);
        else return findPos(l,mid+1,right,x);
    }
    return right;
}

int main(){
	fast_io;
	cin.tie(NULL);
	int n;
	cin >> n;
	vi a(n), o(n);
	vI ps(n);
	
	cin >> a[0];
	ps[0] = a[0];
	FOR(i,1,n,1){
		cin >> a[i];
		ps[i]= ps[i-1] + a[i];
	}
	REP (i,n)cin >> o[i];

	vector < pair <int,int> > heads(1,make_pair(0,ps[n-1]));
	int sum = ps[n-1];
	REP(i,n){
		int pos = findPos(heads,0,heads.size(),o[i]-1);
		cout << pos << " ";
		if(pos == heads.size()){
			heads[pos-1].S =ps[o[i]]- a[o[i]];
			if(o[i] != n){
				heads.PB(make_pair(o[i],ps[o[i]]-ps[o[i]-1]));
			}
			sum = max(max(heads[pos-1].S,max)) 
		}
		else{

		}
	}
	return 0;
}