/*

Created by HyunminJeon on 2020-05-19(Tue)

*/

#include<iostream>
#include<string>
#include<vector>
#include<queue>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int size = prices.size(); // 주식 가격 길이

    for (int i = 0; i < size - 1; i++) { // 문제 예시에서 [0, 1], [0, 2], [0, 3], ... ,[3, 4] 까지라서 i < size - 1이다.
        int cnt = 0; // i++ 때마다, cnt 초기화 시켜줘야 하기에!

        for (int j = i + 1; j < size; j++) { // j는 i와 다르게 1부터 시작해서 4까지라서 size에서 -1을 해주지 않는다.
            if (prices[i] <= prices[j]) { // prices 가격 비교해서 주식이 떨어지지 않은 상황일 때 cnt++!
                cnt++;
            }
            else {
                cnt++; // 만약에 prices[i]가 더 크다면, 1초 후 떨어진다고 적혀있기에 cnt++ 해주고 for문 탈출!
                break;
            }
        }
        answer.push_back(cnt); // answer에다가 cnt 값 차근차근 넣어주기
    }
    answer.push_back(0); // 마지막 prices는 오르고 떨어지고가 없으니까 무조건 0이다.
    return answer;
}