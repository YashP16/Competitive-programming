#include <iostream>
#include <string.h>
using namespace std;

int main(){
	string s = "0110100110010110100101100110100110010110011010010110100110010110100101100110100101101001100101100110100110010110100101100110100110010110011010010110100110010110011010011001011010010110011010010110100110010110100101100110100110010110011010010110100110010110100101100110100101101001100101100110100110010110100101100110100101101001100101101001011001101001100101100110100101101001100101100110100110010110100101100110100110010110011010010110100110010110100101100110100101101001100101100110100110010110100101100110100110010110011010010110100110010110011010011001011010010110011010010110100110010110100101100110100110010110011010010110100110010110011010011001011010010110011010011001011001101001011010011001011010010110011010010110100110010110011010011001011010010110011010010110100110010110100101100110100110010110011010010110100110010110100101100110100101101001100101100110100110010110100101100110100110010110011010010110100110010110011010011001011010010110011010010110100110010110100101100110100110010110011010010110100110010110";
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		cout << s[x] << endl;
	}
}