#include <iostream>
#include <cmath>
using namespace std;
int main (){
int a, b, c;
	cin >> a >> b >> c;
	double D=b*b-4*a*c;
	if (D>0) {
	cout << (-b+sqrt(D))/2*a << "   " << (-b-sqrt(D))/2*a;
	} if (D==0) {
	cout << -b/2*a;
	} if (D<0) {
	cout << "NO";
	}
return 0;
}