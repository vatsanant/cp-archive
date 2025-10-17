#include <iostream>
using namespace std;
typedef long long ll;

/*
Binary Search Range: Start with a range of [1,1018][1,1018], which is large enough to handle big inputs of kk.

Midpoint Check: For each midpoint midmid, calculate how many numbers up to midmid are not divisible by kk:
                count=mid−⌊mid/k⌋
                count=mid−⌊mid/k⌋

                midmid: Total numbers up to midmid.
                ⌊mid/k⌋⌊mid/k⌋: Numbers divisible by kk.
                Difference gives numbers not divisible by kk.

Adjust Range:

    If count≥12count≥12, midmid is a valid candidate, but there might be smaller valid values, so reduce the search range: high=mid−1high=mid−1.
    Otherwise, increase the range: low=mid+1low=mid+1.

    Result: After the loop, ansans contains the smallest number where the count of numbers not divisible by kk is at least 12.
*/


int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        ll k;
        cin >> k;

        ll low = 1, high = 1e18, ans = -1;
        int t;
        cin >> t;

        while (low <= high) {
            ll mid = low + (high - low) / 2;
            ll count = mid - (mid / k);
            if (count >= t) {
                ans = mid;   
                high = mid - 1; 
            } else {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
