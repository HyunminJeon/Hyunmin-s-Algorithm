/*

Created by HyunminJeon on 2020-05-15(Fri)

*/

#include <iostream>
using namespace std;

int main()
{
	int i, j, N = 0;

	cin >> N;

	for (i = 1; i <= N; i++)
	{
		for (j = N; j > i; j--)
			cout << " ";

		for (j = 0; j < i; j++)
			cout << "*";

		cout << '\n';
	}
	return 0;
}