#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;



int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m));
        int mr = n, Mr = 0, mc = m, Mc = 0; 
        /*
        mr: minimum_row & Mr: maximum_row
        mc: minimum_column & Mc: maximum_column
        cr: center_row & cc: center_column
        */

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                if (a[i][j] == '#') {
                    mr = min(mr, i);
                    Mr = max(Mr, i);
                    mc = min(mc, j);
                    Mc = max(Mc, j);
                }
            }
        }

        int cr = (mr + Mr) / 2 + 1; 
        int cc = (mc + Mc) / 2 + 1;

        cout << cr << " " << cc << endl;
    }
    return 0;
} 