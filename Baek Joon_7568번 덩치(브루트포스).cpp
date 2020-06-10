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
            if (weight[i] > weight[j] && height[i] > height[j]) { //i의 덩치가 더 좋은 경우
                tallList[i]--;
            }
            else if (weight[i] < weight[j] && height[i] < height[j]) { //j의 덩치가 더 좋은 경우
                tallList[j]--;
            }
            else { //우열을 가리지 못한 경우
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