/*

Created by HyunminJeon on 2020-05-17(Sun)

*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int N, num;
	vector<int> v;

	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());
	cout << v.front() << " " << v.back() << endl;

	return 0;
}