/*

Created by HyunminJeon on 2020-05-15(Fri)

*/

#include<iostream>
using namespace std;

int main() {

	int n;
	int sum = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {

		sum += i;

	}

	cout << sum << endl;

	return 0;
}