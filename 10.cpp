#include <iostream>
using namespace std;
int main() 
{	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((d-b)<0) {
	cout << c-a-1 << "." << 100+d-b;
	} else {
	cout << c-a << "." << d-b;
	}
	return 0;
}