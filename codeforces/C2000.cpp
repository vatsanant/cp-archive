// Numeric String Template 
// 966/Div 3

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool chkStr(const string& str, const vector<long long>& arr) {
    if(str.length() != arr.size()) return false;
    
    unordered_map<char, long long> mp;
    unordered_map<long long, char> pm;
    
    for(size_t i = 0; i < str.length(); i++) {
        // Use reference to avoid unnecessary copies
        const char& ch = str[i];
        const long long& num = arr[i];
        /*
            char ch = str[i]:
            A new char is created, The value is copied from the original string
            This requires memory allocation and value transfer
                                            
            const char& ch = str[i]
            No new memory is allocated, ch is just a reference (alias) to the original character
            Zero copying overhead, Prevents accidental modification with const
        */



        if ((mp.count(ch) && mp[ch] != num) || 
            (pm.count(num) && pm[num] != ch)) {
            return false;
        }
        
        mp[ch] = num;
        pm[num] = ch;
    }      
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    
    while(tc--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int m;
        cin >> m;
        
        while(m--) {
            string s;
            cin >> s;
            cout << (chkStr(s, a) ? "YES\n" : "NO\n");
        }
    }
    
    return 0;
}
