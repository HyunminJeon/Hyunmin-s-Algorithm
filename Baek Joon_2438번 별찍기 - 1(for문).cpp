/*

Created by HyunminJeon on 2020-05-13(Wed)

*/

#include<iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	for (int row = 1; row <= N; row++) { // row의 한계는 N의 수에 의해 결정되고
		for(int column = 1; column <= row; column++){ // column의 한계는 row의 수에 의해 결정된다.

			cout << "*"; // 몇 개의 *을 찍고 다음 행으로 넘어가는지를 생각하기!
		
		}

		cout << endl;
	}

	return 0;

}