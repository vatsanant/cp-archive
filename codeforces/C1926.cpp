/* *
 * Vlad and Sum of Digits
 * 21.1.25
 */

#include <iostream>
#include <vector>

using namespace std; 
const int MAX = 200007;
// to calculate the sum of the digits

int add(int x){
    int res = 0;
    while(x){
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main(){
    
    // Used dynamic Programming to solve
    int tc; cin >> tc;
    vector<int> q(tc);
    int nmax = 0;
    for(int i = 0; i < tc; i++){
        cin >> q[i];
        nmax = max(nmax, q[i]);
    }
    
    // Precomputing result;
    vector<int> a(nmax + 1);
    a[0] = 0;
    for(int i = 1; i <= nmax; i++){
        a[i] = a[i-1] + add(i);
    }
    for(int i = 0; i < tc; i++){
        cout << a[q[i]] << '\n';
    }

    return 0; 
}
