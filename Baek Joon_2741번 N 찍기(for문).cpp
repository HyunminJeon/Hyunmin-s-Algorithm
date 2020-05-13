/*

Created by HyunminJeon on 2020-05-13(Wed)

*/

#include<iostream>
using namespace std;

int main() {

	int N;
	cin >> N;
	if ((N > 1) && (N < 100000)) { // 범위 설정을 안 해주면, 백준에서 시간 초과가 자꾸 뜬다! 그럴 때는 범위 설정을 해주자~
		for (int i = 1; i <= N; i++) {
			cout << i << endl;
		}
	}
	else {
		cout << "N의 범위가 잘못 설정되었습니다." << endl;
	}

	return 0;

}