// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//   int t;
//   cin >> t;

//   while (t--) {
//     int k;
//     int three = 0;

//     cin >> k;
//     for (int j = 1; j <= k; j++) {

//       if (j % 3 == 0 || j % 10 == 3) {
//         continue;
//       } else {
//         three++;
//       }
//     }

//     cout << three << '\n';
//   }

//   return 0;
// }

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t; // Number of test cases

  while (t--) {
    int k;
    cin >> k; // Input value for current test case

    int three = 0; // Initialize counter for valid numbers

    for (int j = 1; j <= k; j++) {
      if (j % 3 == 0 || j % 10 == 3) {
        continue; // Skip if multiple of 3 or ends with 3
      } else {
        three++; // Increment counter for valid numbers
      }
    }

    cout << three << '\n'; // Output the count for current test case
  }

  return 0;
}
