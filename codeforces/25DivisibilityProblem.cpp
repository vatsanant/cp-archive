#include <bits/stdc++.h>

using namespace std;
int main() {

  int t;
  cin >> t;

  long long a, b;
  int steps = 0;

  for (int i = 1; i <= t; ++i) {
    cin >> a >> b;

    if (a % b == 0) {
      cout << 0 << '\n';
    }

    else if (a % b != 0) {
      steps = b - (a % b); // Calculate steps needed to make a divisible by b
      cout << steps << '\n';
    }
  }
  return 0;
}