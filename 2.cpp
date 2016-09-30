#include <iostream>
using namespace std;
int main () {
	int X1, Y1, X2, Y2;
	cin >> X1 >> Y1 >> X2 >> Y2;
	if ((X1 == X2) || (Y1 == Y2)) {
	cout << "Yes";
	} else {
	cout << "No";
	}
	return 0;
	}