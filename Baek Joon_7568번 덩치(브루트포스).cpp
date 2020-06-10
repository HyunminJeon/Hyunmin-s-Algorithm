/*

Created by HyunminJeon on 2020-06-10(Wed)

*/

#include <iostream>

using namespace std;

int main() {

    int N;

    cin >> N;

    int* height = new int[N];
    int* weight = new int[N];
    int* tallList = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> weight[i] >> height[i];
        tallList[i] = N;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (weight[i] > weight[j] && height[i] > height[j]) { //i�� ��ġ�� �� ���� ���
                tallList[i]--;
            }
            else if (weight[i] < weight[j] && height[i] < height[j]) { //j�� ��ġ�� �� ���� ���
                tallList[j]--;
            }
            else { //�쿭�� ������ ���� ���
                tallList[i]--;
                tallList[j]--;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << tallList[i] << " ";
    }

    return 0;
}