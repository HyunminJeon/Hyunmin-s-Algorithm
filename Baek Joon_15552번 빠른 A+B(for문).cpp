/*

Created by HyunminJeon on 2020-05-13(Wed)

*/

#include<iostream>
using namespace std;

int main() {

	cin.tie(NULL); // cout�� cin�� tie�� untie ��Ű�� ��(cout�� ���۸� flush ���� �ʰ�, �ٷ� cin ����!)
	cin.sync_with_stdio(false); // C����� stdio��, C++�� iostream�� ������ ���� ��!
								//���� �ڿ������� �̾ ����� ���� ������, ���� ����ȭ�ϴ� �ð��� ������⿡ �ð��� ��������.

	int T; int A; int B;
	cin >> T;

	for (int i = 1; i <= T; i++) {

		cin >> A >> B;
		cout << A + B << "\n";

	}

	return 0;

}