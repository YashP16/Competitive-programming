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
#define MP make_pair
#define sz size()
#define InF  2147483647
#define READ freopen("input.txt", "r", stdin);
#define WRITE freopen("output.txt", "w", stdout);
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define SQR(n) ((n)*(n))
#define MEM(a,val) memset(a,val,sizeof(a))
using namespace std;


int main(){
	fast_io;
	vector <vector<char> > mat(9,vector <char> (9));
	REP(i,9){
		REP(j,9){
			cin >> mat[i][j];
		}
	}
	int x,y;
	cin >> x >> y;
	x--;
	y--;
	bool flag = 0;
	int m = x%3;
	int n = y%3;
	int a = m*3;
	int b = n*3;

	FOR(i,a,a+3,1){
		FOR(j,b,b+3,1){
			if(mat[i][j]=='.'){
				flag = 1;
				mat[i][j] = '!';
			}
		}
	}

	
	if(!flag){
		REP(i,9){
			REP(j,9){
				if(mat[i][j] == '.')mat[i][j] = '!';
				if(j%3 == 2) cout << mat[i][j] << " ";
				else cout << mat[i][j];
			}
			if(i%3 == 2) cout << "\n\n";
			else cout << "\n";
		}
	}
	else{
		REP(i,9){
			REP(j,9){
				if(j%3 == 2) cout << mat[i][j] << " ";
				else cout << mat[i][j];
			}
			if(i%3 == 2) cout << "\n\n";
			else cout << "\n";
		}	
	}
	return 0;
}