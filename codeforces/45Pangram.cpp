#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>
using namespace std;

string to_lowercase(string str) {
  for (int i = 0; i < str.length(); ++i) {
    str[i] = tolower(str[i]);
  }
  return str;
}


int main(){
    int n; cin >> n;
    string word;
    cin >> word;

    

    word = to_lowercase(word);

    word.erase(unique(word.begin(), word.end()), word.end());

    sort(word.begin(), word.end());

    cout << word << '\n';

    if(word.length() == 26){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    
}