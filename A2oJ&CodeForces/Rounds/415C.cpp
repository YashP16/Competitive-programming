#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <stack>
#include <limits>
#include <vector>
#include <stack>
#include <sstream>
#include <queue>
#include <utility> // for pair
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b,c) for(int i=a;i<b;i += c)
#define FORd(i,a,b,c) for(int i=a;i>=b;i -=c)
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ll long long int //range -> 9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
#define ui unsigned int // range -> 0 to 4,294,967,295
#define ull unsigned long long
#define PB push_back
#define sz size()
#define InF  2147483647
using namespace std;

bool comp(int a,int b){
	if(a>b)return true;
	return false;
}

int main(){
	int n;
	cin >> n;
	int x[n];
	REP(i,n) cin >> x[i];
	sort(x,x+n,comp);
	int count =1;
	ll sum =0;
	while(count<=n){
		FOR(i,0,n-count,1){
			FOR(j,i+count,n,1){
				sum += (x[i]-x[j]);
			}
		}
		count++;
	}
	cout << sum % 100000007 <<endl;
	return 0;
}