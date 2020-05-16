/*

Created by HyunminJeon on 2020-05-16(Sat)

*/

#include<iostream>
using namespace std;

int main() {

	int N, X;
	cin >> N >> X; // N 값을 초기화 시켜주지 않아도 되는 이유 = N 값은 입력을 받기 때문에.

	int* arr = new int[N]; // N의 개수 만큼 값을 입력받을 동적 배열 선언


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