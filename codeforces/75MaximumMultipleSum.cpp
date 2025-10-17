#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> cases[i];
    }

    for (int i = 0; i < t; ++i) {
        int n = cases[i];
        int max_sum = 0;
        int best_x = 2;
        
        for (int x = 2; x <= n; ++x) {
            int k = n / x;
            int current_sum = x * (k * (k + 1)) / 2;
            if (current_sum > max_sum) {
                max_sum = current_sum;
                best_x = x;
            }
        }
        
        cout << best_x << endl;
    }

    return 0;
}
