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
    int size = prices.size(); // �ֽ� ���� ����

    for (int i = 0; i < size - 1; i++) { // ���� ���ÿ��� [0, 1], [0, 2], [0, 3], ... ,[3, 4] ������ i < size - 1�̴�.
        int cnt = 0; // i++ ������, cnt �ʱ�ȭ ������� �ϱ⿡!

        for (int j = i + 1; j < size; j++) { // j�� i�� �ٸ��� 1���� �����ؼ� 4������ size���� -1�� ������ �ʴ´�.
            if (prices[i] <= prices[j]) { // prices ���� ���ؼ� �ֽ��� �������� ���� ��Ȳ�� �� cnt++!
                cnt++;
            }
            else {
                cnt++; // ���࿡ prices[i]�� �� ũ�ٸ�, 1�� �� �������ٰ� �����ֱ⿡ cnt++ ���ְ� for�� Ż��!
                break;
            }
        }
        answer.push_back(cnt); // answer���ٰ� cnt �� �������� �־��ֱ�
    }
    answer.push_back(0); // ������ prices�� ������ �������� �����ϱ� ������ 0�̴�.
    return answer;
}