/*

Created by HyunminJeon on 2020-05-20(Wed)

*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

    sort(participant.begin(), participant.end()); // 참가자 정렬 시키는 sort 함수
    sort(completion.begin(), completion.end()); // 완주자 정렬 시키는 sort 함수

    for (int i = 0; i < completion.size(); i++) { // 완주자 길이만큼 for문 돌려서
        if (completion[i] != participant[i]) { // i가 0일 때, 즉 앞에서부터 비교해서 만약 같지 않다면
            return participant[i]; // 완주 못한 참가자로 간주하여 return 해주기!
        }
    }
    return participant[participant.size() - 1]; // 만약 다 똑같다면, for문이 돌려지지 않은 마지막 선수가 return!
}

// 아래는 vector 말고, Hash를 사용한 코드이다.

// #include <vector>
// #include <string>
// #include <unordered_map>//해쉬맵 사용
// using namespace std;
//
// //해쉬테이블을 이용한 솔루션
// string solution(vector<string> participant, vector<string> completion)
// {
// 	string answer = "";
//	unordered_map<string, int> temp;
//	for (string name : participant)
//	{
//		//해쉬테이블에 key값으로 name을 주고 값을 더하기
//		temp[name]++;
//	}
//	for (string name : completion)
//	{
//		//name key로 접근하여 값을 감소시킨다.
//		temp[name]--;
//	}
//	//처음부터 해쉬테이블을 순회한다.
//	for (auto pair : temp)
//	{
//		//해쉬테이블의 2번째값이 0보다 크다면
//		if (pair.second > 0)
//		{
//			//answer에 해쉬테이블 key값을 넣는다.
//			answer = pair.first;
//			break;
//		}
//	 }
//	 return answer;
// }