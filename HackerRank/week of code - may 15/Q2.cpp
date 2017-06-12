#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <vector>
#include <sstream>
#include <utility> // for pair
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b,c) for(ll i=a;i<b;i += c)
#define FORd(i,a,b,c) for(ll i=a;i>=b;i -=c)
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ll long long int //range -> â��9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
#define ui unsigned int // range -> 0 to 4,294,967,295
#define ull unsigned long long
using namespace std;

int main(){
	int n;
	ll hit, t;
	cin >> n >> hit >> t;
	ll h[n];
	REP(i,n)cin >> h[i];
	sort(h,h+n);
	int count =0;
	int p =0;
	while(t-- && p < n){
		if(h[p]>hit)h[p]-= hit;
		else{
			count++;
			p++;
		}
	}
	cout << count << endl;
	return 0;

}