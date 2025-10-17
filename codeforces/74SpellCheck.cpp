#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string m; cin >> m;
        
        sort(m.begin(), m.end());

        if(n != 5) cout << "NO\n";
        else if(m == "Timru") cout << "YES\n";
        else cout << "No\n";



    }
    return 0;
}