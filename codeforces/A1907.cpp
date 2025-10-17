#include <iostream>
#include <vector>
#include <string>

using namespace std; 

void solve() {
    char x, y;
	cin >> x >> y;
    for (char c = 'a'; c <= 'h'; c++) {
		if (c != x) cout << c << y << '\n';
	}
    for (char c = '1'; c <= '8'; c++) {
		if (c != y) cout << x << c << '\n';
	}
}

int main(){	
	int tc; 
	cin >> tc;
	string mv; 
	while(tc--){
		solve();
	}

	return 0;
}
