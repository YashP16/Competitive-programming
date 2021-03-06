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
	int n;
	cin >> n;
	int layer = 1;
	int count = 1;
	vii m(n,vi (n,0));
	int i =0;
	int j = 0;
	int x = SQR(n);
	vector < pair <int,int> > v;
	v.PB(make_pair(0,0));
	while(count <= x){
		while(j<n-layer){
			m[i][j] = count;
			if(count%11==0) v.PB(make_pair(i,j));
			count++;
			j++;

		}
		while(i<n-layer){
			m[i][j]= count;
			if(count%11==0) v.PB(make_pair(i,j));
			count++;
			i++;
		}

		while(j> layer-1){
			m[i][j]= count;
			if(count%11==0) v.PB(make_pair(i,j));
			count++;
			j--;
		}
		while(i>layer-1){
			m[i][j]=count;
			if(count%11==0) v.PB(make_pair(i,j));
			count++;
			i--;
		}
		if(count == x) {
			m[n/2][n/2] = count;
			if(count%11==0) v.PB(make_pair(i,j));
			count++;
		}
		i = layer;
		j = layer;
		layer++;
	}
	REP(a,n){
		REP(b,n){
			cout << m[a][b] << " ";
		}
		cout << "\n";
	}
	cout << "Total Power points : " << v.size() << "\n";
	int s = v.size();
	REP(i,s){
		cout << "("<<v[i].F<< ","<< v[i].S<<")\n";
	}

	return 0;
}