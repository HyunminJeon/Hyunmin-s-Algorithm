/*

Created by HyunminJeon on 2020-05-14(Thu)

*/

#include<iostream>
using namespace std;

int main() {

	int T; int A; int B;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> A >> B;
		cout << "Case #" << i << ": " << A + B << endl;
	}

	return 0;

}