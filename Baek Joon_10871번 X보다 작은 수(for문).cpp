/*

Created by HyunminJeon on 2020-05-16(Sat)

*/

#include<iostream>
using namespace std;

int main() {

	int N, X;
	cin >> N >> X; // N ���� �ʱ�ȭ �������� �ʾƵ� �Ǵ� ���� = N ���� �Է��� �ޱ� ������.

	int* arr = new int[N]; // N�� ���� ��ŭ ���� �Է¹��� ���� �迭 ����


	for (int i = 0; i < N; i++) {

		cin >> arr[i];

	}

	for (int j = 0; j < N; j++){

		if (arr[j] < X) {
			cout << arr[j] << ' ';

		}
	}

	return 0;

}