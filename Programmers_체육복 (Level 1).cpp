/*

Created by HyunminJeon on 2020-05-22(Fri)

*/

#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> student(n, 1); // �л����� ���� �迭�� �����Ѵ�.

    for (int i = 0; i < reserve.size(); i++) { // ������ �����ϴ� ���
        student[reserve[i] - 1]++;
    }
    for (int i = 0; i < lost.size(); i++) { // ������ �����ϴ� ���
        student[lost[i] - 1]--;
    }
    for (int i = 0; i < lost.size(); i++) {
        if ((student[lost[i] - 1] == 0) && (student[lost[i] - 2] == 2)) { // ���࿡ �ջ���� ������ ���� ���
            student[lost[i] - 2]--;
            student[lost[i] - 1]++;
        }
        if ((student[lost[i] - 1] == 0) && (student[lost[i] == 2])) { // ���࿡ �޻���� ������ ���� ���
            student[lost[i]]--;
            student[lost[i] - 1]++;
        }
    }

    for (int i = 0; i < student.size(); i++) { // ü������ �ִ� ����� ���� ����.
        if (student[i] > 0)
            answer++;
    }
    return answer;
}