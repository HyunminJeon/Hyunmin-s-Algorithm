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

	for (int i = N; i >= 1; i--) { // �� �κп���, i > 0���� ���� ����, i >= 1�� ���� ���� ���ڰ� �ð��� �� ���!
		cout << i;
		cout << '\n'; // ��������, cout << i << endl; ���� cout << '\n';�� �ð��� �ξ� �� ���!
	}

	return 0;
}