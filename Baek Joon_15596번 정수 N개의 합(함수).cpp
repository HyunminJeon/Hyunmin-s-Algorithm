/*

Created by HyunminJeon on 2020-05-14(Thu)

*/

#include<cstdio>
#include<vector>
using namespace std;

long long sum(vector<int> &a)
{
	long long answer = 0; // �Լ��� long long Ÿ���̱⿡, return ���� long long Ÿ���̾�� �Ѵ�!

	for (int i = 0; i < a.size(); i++) {

		answer += a[i];

	}

	return answer;
}