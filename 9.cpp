#include <iostream>
using namespace std;
int main ()  {
int a, b, c, d;
	cin >>a >> b >> c >> d;
	if ((a == c && b == d) || (a == 0 && b != 0) || (-d/c == 0 && -b/a == 0 && a == 0)) {
	cout << "NO";
	} if (a == 0 && b == 0) {
	cout << "INF";
	} else {
	cout << -b/a;
	}
return 0;
}