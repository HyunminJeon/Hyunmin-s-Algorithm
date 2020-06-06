/*

Created by HyunminJeon on 2020-06-05(Fri)

*/

#include<iostream>
using namespace std;

void star(int column, int row, int N) {

    if ((column % 3 == 1) && (row % 3 == 1)) {
        cout << ' ';
        return;
    }
    if ((column / (N / 3) == 1) && (row / (N / 3) == 1)) {
        cout << ' ';
        return;
    }
    else
        cout << '*';
}

int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            star(i, j, N);
        }
            cout << endl;
    }
}