#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	int tc;
	cin >> tc;
	string s,t;
	while (tc--){
		cin >> s >> t;
		int a = s.length()+t.length();
		if (s[0] != t[0]){
			cout << a << endl;
		} 
		else {
			int cnt=0;
			while (cnt < s.length()&&cnt < t.length()&&s[cnt] == t[cnt]){
				cnt++;
			}
			int ans = cnt + 1 + (t.length() + s.length() - 2*cnt);
			cout << ans << endl;
			
		}
	}
	return 0;
}
