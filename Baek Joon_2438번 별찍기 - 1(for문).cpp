/*

Created by HyunminJeon on 2020-05-13(Wed)

*/

#include<iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	for (int row = 1; row <= N; row++) { // row�� �Ѱ�� N�� ���� ���� �����ǰ�
		for(int column = 1; column <= row; column++){ // column�� �Ѱ�� row�� ���� ���� �����ȴ�.

			cout << "*"; // �� ���� *�� ��� ���� ������ �Ѿ������ �����ϱ�!
		
		}

		cout << endl;
	}

	return 0;

}