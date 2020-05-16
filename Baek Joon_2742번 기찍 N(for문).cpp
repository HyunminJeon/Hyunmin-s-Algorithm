/*

Created by HyunminJeon on 2020-05-16(Sat)

*/

#include<iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = N; i >= 1; i--) { // 이 부분에서, i > 0으로 했을 때랑, i >= 1로 했을 때랑 후자가 시간이 덜 든다!
		cout << i;
		cout << '\n'; // 무엇보다, cout << i << endl; 보다 cout << '\n';이 시간이 훨씬 덜 든다!
	}

	return 0;
}