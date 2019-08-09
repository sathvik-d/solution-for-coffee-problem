# solution-for-coffee-problem
Code
#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, k s = 0;
	cin >> n>> k;
	while ( n != 0 )
	{
	    s = s + n;
	    n = n* ( ( float ) ( 100 - k) ) / 100.0;
	}
	cout<<s<<"\n";
}
© 2019 GitHub, 
