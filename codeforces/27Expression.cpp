#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;

  int val1, val2, val3, val4, val5, val6;

  val1 = a * b * c;
  val2 = a + b + c;
  val3 = (a + b) * c;
  val4 = (a * b) + c;
  val5 = a * (b + c);
  val6 = a + (b * c);
  int array[6] = {val1, val2, val3, val4, val5, val6};
  sort(array, array + 6);

  cout << array[5];

  return 0;
}