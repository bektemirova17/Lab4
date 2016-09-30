#include <iostream>
using namespace std;
int main(){
int k,m,n;
    	cin>>k>>m>>n;
    	if(k==n)
    	{
int a=2*m;
        cout<<a;
    	}   else {
int a=2*n;
        if(a%k==0)
        {
int b=a*m;
       	cout<<b;
        }   else {
int b=(a+1)*m;
        cout<<b;
        }
    	}
return 0;
}
