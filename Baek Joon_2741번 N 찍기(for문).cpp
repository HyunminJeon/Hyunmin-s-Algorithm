/*

Created by HyunminJeon on 2020-05-13(Wed)

*/

#include<iostream>
using namespace std;

int main() {

	int N;
	cin >> N;
	if ((N > 1) && (N < 100000)) { // ���� ������ �� ���ָ�, ���ؿ��� �ð� �ʰ��� �ڲ� ���! �׷� ���� ���� ������ ������~
		for (int i = 1; i <= N; i++) {
			cout << i << endl;
		}
	}
	else {
		cout << "N�� ������ �߸� �����Ǿ����ϴ�." << endl;
	}

	return 0;

}