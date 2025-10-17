//#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {

  int n;
  cin >> n;
  string answer = "abcdefghijklmnopqrstuvwxyz";
  string word;
  cin >> word;


  int x = word.length();

  // to lower
  for (int i = 0; i < x; ++i) {
    word[i] = tolower(word[i]);
  }

  // sort
  sort(word.begin(), word.end());

  // remove suplicates
  auto rmvd = unique(word.begin(), word.end());

  word.erase(rmvd, word.end());

  if (word == answer) {
    cout << "YES\n";

  }

  else {
    cout << "NO\n";
  }

  return 0;
}
