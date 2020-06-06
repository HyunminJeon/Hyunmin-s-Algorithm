/*

Created by HyunminJeon on 2020-06-06(Sat)

*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

bool compare(string A, string B) {

	int a_length = A.length();
	int b_length = B.length();
	int a_sum = 0;
	int b_sum = 0;

	// 1��° �� ���� : �ø��� ��ȣ�� ª���� ���̴�.

	if (a_length < b_length) return true;
	else if (b_length < a_length) return false;

	// 2��° �� ���� : A, B�� �ø��� ��ȣ�� ���̰� ���ٸ� �� ������ �ڸ��� ������ ���ϱ�.

	else if (a_length == b_length) {
		for (int i = 0; i < a_length; i++) {
			if (A[i] >= '0' && A[i] <= '9') {
				a_sum += (A[i] - 48);
			}
		}

		for (int i = 0; i < b_length; i++) {
			if (B[i] >= '0' && B[i] <= '9') {
				b_sum += (B[i] - 48);
			}
		}

		if (a_sum < b_sum) return true;
		else if (b_sum < a_sum) return false;

		// 3��° �� ���� : A, B�� �ø��� ��ȣ�� ���̵� ����, �� ������ �ڸ��� �յ� ���� �� ���������� ���ϱ�.

		else if (a_sum == b_sum) {
			if (A < B) {
				return true;
			}
			else return false;
		}
	}
}

int main() {

	int N;
	vector<string> space;

	cin >> N;

	for (int i = 0; i < N; i++) {
		string serial;

		cin >> serial;
		space.push_back(serial);
	}

	sort(space.begin(), space.end(), compare);

	for (int i = 0; i < space.size(); i++) {
		cout << space[i] << endl;
	}
}