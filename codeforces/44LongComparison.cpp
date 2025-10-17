#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long l, m, p, q;
        cin >> l >> m >> p >> q;

        double log_l = log10(l) + m;  
        double log_p = log10(p) + q; 

    
        if (abs(log_l - log_p) < 1e-9) {
            cout << '=' << '\n';
        } else if (log_l < log_p) {
            cout << '<' << '\n';
        } else {
            cout << '>' << '\n';
        }
    }

    return 0;
}
