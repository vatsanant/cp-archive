#include <iostream>
#include <string>
using namespace std; 
int main(){ 
    int tc; 
    cin >> tc;

    while(tc--){
        string s; 
        cin >> s;
        int n = s.length();
        s[n-1]=s[0];
        cout << s << endl;

    }
    return 0;
}