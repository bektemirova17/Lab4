#include <iostream>
using namespace std;
int main () {
int k;
	cin >> k;
	if ((k % 5 == 0 || k % 3 == 0) || k > 3 && k != 4 && k != 7) {
	cout  << "Yes";
	} else {
	cout  << "No";
	} 
return 0;
}