/*

Created by HyunminJeon on 2020-05-18(Mon)

*/

#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack <int> basket; // �ٱ��� stack �������ֱ�

    for (int i = 0; i < moves.size(); i++) { // moves ������ �����ŭ for�� ������
        int idx = moves[i] - 1;

        for (int j = 0; j < board.size(); j++) { // board ������ �����ŭ for�� ������

            if (board[j][idx] != 0) { // ������ ���� ���� ��! ��, ������ ���� ��

                if ((!basket.empty() && basket.top() == board[j][idx])) { // stack�� ������� �����鼭 �� ���� �����̶� ���� ���� �����̶� ���� ������ ��!
                    basket.pop(); // �ٱ��Ͽ� ���� �ִ� ����(���� ���� ������ ���� ����) out!
                    answer += 2; // �׸��� ���信�ٰ� +2 ���ش�. (����� 2���� ����)
                }
                else {
                    basket.push(board[j][idx]); // stack�� ����ְų� ���� ������ �ƴϸ� �׳� push, ���� �־��ֱ�
                }

                board[j][idx] = 0;
                break;
            }
        }
    }
    return answer;
}