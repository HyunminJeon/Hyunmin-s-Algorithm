/*

Created by HyunminJeon on 2020-06-04(Thu)

*/

#include<iostream>
using namespace std;

int main() {

    int H, M;
    cin >> H >> M;

    if (M >= 45 && M <= 59) {
        cout << H << " " << M - 45 << endl;
    }
    else if (M >= 0 && M <= 44) {
        if (H != 0) {
        cout << H - 1 << " " << 60 - (45 - M) << endl;
        }
        else if (H == 0) {
            cout << 23 << " " << 60 - (45 - M) << endl;
        }
    }

    return 0;

}
