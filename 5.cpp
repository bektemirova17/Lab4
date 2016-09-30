#include <iostream>
using namespace std;
int main () {
	int X1, Y1, X2, Y2;
	cin >> X1 >> Y1 >> X2 >> Y2;
	if ((abs(X2 - X1) == 2) && (abs(Y2 - Y1) == 1) || (abs(X2 - X1)== 1) && (abs(Y2 - Y1) == 2))   {
	cout << "YES";
	} else {
	cout << "NO";
	}
	return 0;
}