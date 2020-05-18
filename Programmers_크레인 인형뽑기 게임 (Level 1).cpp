/*

Created by HyunminJeon on 2020-05-18(Mon)

*/

#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack <int> basket; // 바구니 stack 선언해주기

    for (int i = 0; i < moves.size(); i++) { // moves 벡터의 사이즈만큼 for문 돌리기
        int idx = moves[i] - 1;

        for (int j = 0; j < board.size(); j++) { // board 벡터의 사이즈만큼 for문 돌리기

            if (board[j][idx] != 0) { // 인형이 없지 않을 때! 즉, 인형이 있을 때

                if ((!basket.empty() && basket.top() == board[j][idx])) { // stack이 비어있지 않으면서 맨 위의 인형이랑 새로 들어올 인형이랑 같은 인형일 때!
                    basket.pop(); // 바구니에 원래 있던 인형(새로 들어올 인형과 같은 종류) out!
                    answer += 2; // 그리고 정답에다가 +2 해준다. (사라진 2개의 인형)
                }
                else {
                    basket.push(board[j][idx]); // stack이 비어있거나 같은 인형이 아니면 그냥 push, 인형 넣어주기
                }

                board[j][idx] = 0;
                break;
            }
        }
    }
    return answer;
}