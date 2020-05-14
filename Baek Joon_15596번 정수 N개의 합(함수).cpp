/*

Created by HyunminJeon on 2020-05-14(Thu)

*/

#include<cstdio>
#include<vector>
using namespace std;

long long sum(vector<int> &a)
{
	long long answer = 0; // 함수가 long long 타입이기에, return 값도 long long 타입이어야 한다!

	for (int i = 0; i < a.size(); i++) {

		answer += a[i];

	}

	return answer;
}