/*

Created by HyunminJeon on 2020-05-22(Fri)

*/

#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> student(n, 1); // 학생들을 담은 배열을 생성한다.

    for (int i = 0; i < reserve.size(); i++) { // 여벌이 증가하는 경우
        student[reserve[i] - 1]++;
    }
    for (int i = 0; i < lost.size(); i++) { // 도난이 감소하는 경우
        student[lost[i] - 1]--;
    }
    for (int i = 0; i < lost.size(); i++) {
        if ((student[lost[i] - 1] == 0) && (student[lost[i] - 2] == 2)) { // 만약에 앞사람이 여벌이 있을 경우
            student[lost[i] - 2]--;
            student[lost[i] - 1]++;
        }
        if ((student[lost[i] - 1] == 0) && (student[lost[i] == 2])) { // 만약에 뒷사람이 여벌이 있을 경우
            student[lost[i]]--;
            student[lost[i] - 1]++;
        }
    }

    for (int i = 0; i < student.size(); i++) { // 체육복이 있는 사람의 수를 센다.
        if (student[i] > 0)
            answer++;
    }
    return answer;
}