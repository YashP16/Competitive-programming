#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <vector>
#include <sstream>
#include <utility> // for pair
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b,c) for(i=a;i<b;i += c)
#define FORd(i,a,b,c) for(i=a;i>=b;i -=c)
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ll long long int //range -> –9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
#define ui unsigned int // range -> 0 to 4,294,967,295
#define ull unsigned long long
using namespace std;

int main(){
	string s;
	cin >> s;
	int x[s.length()]={0};
	int i,j;
	int same=0;
	FOR(i,0,s.length(),1){
		if(s[i] == s[i+1]){
			same++;
			x[i+1]=same;			
		}
		else{
			x[i+1]=same;
		}
	}
	int m;
	cin >> m;
	FOR(i,0,m,1){
		int l,r;
		cin >> l >> r;
		cout << x[r-1]-x[l-1] << endl;
	}
	return 0;
}