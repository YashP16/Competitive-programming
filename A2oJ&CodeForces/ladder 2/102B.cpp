#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <vector>
#include <sstream>
#include <utility> // for pair(
#define FOR(i,a,b,c) for(i=a;i<b;i += c)
#define FORd(i,a,b,c) for(i=a;i>=b;i -=c)
#define ll long long int
using namespace std;

int main(){
	string n;
	cin >> n;
	int count = 0;
	while(n.length()!=1){
		int i;
		ll c=0;
		FOR(i,0,n.length(),1){
			c += (int)n[i]-'0';
		}
		n=to_string(c);
		count++;
	}
	cout << count;
	return 0;
}