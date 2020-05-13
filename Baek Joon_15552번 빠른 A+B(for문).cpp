/*

Created by HyunminJeon on 2020-05-13(Wed)

*/

#include<iostream>
using namespace std;

int main() {

	cin.tie(NULL); // cout과 cin의 tie를 untie 시키는 것(cout의 버퍼를 flush 하지 않고, 바로 cin 부터!)
	cin.sync_with_stdio(false); // C언어의 stdio와, C++의 iostream의 연결을 끊는 것!
								//둘을 자연스럽게 이어서 사용할 수는 없지만, 각자 동기화하는 시간이 사라지기에 시간은 빨라진다.

	int T; int A; int B;
	cin >> T;

	for (int i = 1; i <= T; i++) {

		cin >> A >> B;
		cout << A + B << "\n";

	}

	return 0;

}