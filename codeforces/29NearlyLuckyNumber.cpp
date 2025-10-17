#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n; // last time i didn't consider long long xD
  cin >> n;

  string number = to_string(n);

  int lucky_digits = 0;
  for (int i = 0; i < number.length(); i++) {
    if (number[i] == '4' or number[i] == '7') {
      lucky_digits++;
    }
  }

  (lucky_digits == 4 || lucky_digits == 7) ? cout << "YES" : cout << "NO";

  return 0;
}

// Mumbai Indian is my fav IPL Team. And Hitman Rohit Sharma is my favourite
// player.