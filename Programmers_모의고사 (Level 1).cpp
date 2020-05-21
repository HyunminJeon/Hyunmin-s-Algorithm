/*

Created by HyunminJeon on 2020-05-21(Thu)

*/

#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;

	// 반복되는 규칙 각각 one, two, three 배열에 넣어주기

	int one[5] = { 1, 2, 3, 4, 5 };
	int two[8] = { 2, 1, 2, 3, 2, 4, 2, 5 };
	int three[10] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

	// 채점하는 부분

	int sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 0; i < answers.size(); i++) {
		if (answers[i] == one[i % 5]) sum1++;
		if (answers[i] == two[i % 8]) sum2++;
		if (answers[i] == three[i % 10]) sum3++;
	}

	// max 값 찾아서 answer에다가 넣어주기

	int cnt = max(sum1, max(sum2, sum3));
	if (cnt == sum1) answer.push_back(1);
	if (cnt == sum2) answer.push_back(2);
	if (cnt == sum3) answer.push_back(3);

	// answer 정렬해주기

	sort(answer.begin(), answer.end());

	return answer;

}