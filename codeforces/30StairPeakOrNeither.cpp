#include <iostream>
using namespace std;

int main() {
  int t, a, b, c;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    cin >> a >> b >> c;
    if (a < b && b < c) {
      cout << "STAIR\n";
    } else if (a < b && b > c) {
      cout << "PEAK\n";
    } else {
      cout << "NONE\n";
    }
  }

  return 0;
}