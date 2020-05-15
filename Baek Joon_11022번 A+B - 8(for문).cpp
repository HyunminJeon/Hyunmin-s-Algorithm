/*

Created by HyunminJeon on 2020-05-15(Fri)

*/

#include<iostream>
using namespace std;

int main() {

	int A, B, T;

	cin >> T;

	for (int i = 1; i <= T; i++) {

		cin >> A >> B;
		cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << endl;

	}

	cout << '\n';

	return 0;
}