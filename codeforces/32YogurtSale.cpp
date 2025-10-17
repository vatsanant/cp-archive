#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  int n, a, b;

  int val1, val2;/**/

  while (t--) {
    cin >> n >> a >> b;

    if (n % 2 == 0) {
      val1 = (n / 2) * b;
      val2 = (n * a);
    }

    else {
      val1 = ((n / 2) * b) + a;
      val2 = n * a;
    }
    cout << min(val1, val2) << " \n";
  }

  return 0;
}
