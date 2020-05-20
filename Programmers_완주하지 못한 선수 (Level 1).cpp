/*

Created by HyunminJeon on 2020-05-20(Wed)

*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

    sort(participant.begin(), participant.end()); // ������ ���� ��Ű�� sort �Լ�
    sort(completion.begin(), completion.end()); // ������ ���� ��Ű�� sort �Լ�

    for (int i = 0; i < completion.size(); i++) { // ������ ���̸�ŭ for�� ������
        if (completion[i] != participant[i]) { // i�� 0�� ��, �� �տ������� ���ؼ� ���� ���� �ʴٸ�
            return participant[i]; // ���� ���� �����ڷ� �����Ͽ� return ���ֱ�!
        }
    }
    return participant[participant.size() - 1]; // ���� �� �Ȱ��ٸ�, for���� �������� ���� ������ ������ return!
}

// �Ʒ��� vector ����, Hash�� ����� �ڵ��̴�.

// #include <vector>
// #include <string>
// #include <unordered_map>//�ؽ��� ���
// using namespace std;
//
// //�ؽ����̺��� �̿��� �ַ��
// string solution(vector<string> participant, vector<string> completion)
// {
// 	string answer = "";
//	unordered_map<string, int> temp;
//	for (string name : participant)
//	{
//		//�ؽ����̺� key������ name�� �ְ� ���� ���ϱ�
//		temp[name]++;
//	}
//	for (string name : completion)
//	{
//		//name key�� �����Ͽ� ���� ���ҽ�Ų��.
//		temp[name]--;
//	}
//	//ó������ �ؽ����̺��� ��ȸ�Ѵ�.
//	for (auto pair : temp)
//	{
//		//�ؽ����̺��� 2��°���� 0���� ũ�ٸ�
//		if (pair.second > 0)
//		{
//			//answer�� �ؽ����̺� key���� �ִ´�.
//			answer = pair.first;
//			break;
//		}
//	 }
//	 return answer;
// }