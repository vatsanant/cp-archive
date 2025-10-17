#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string word;
    getline(cin, word);
    vector<char> a;

    //extraction
    for(int i = 0; i < word.length(); i++){
        if(word[i] == '1' || word[i] == '2' || word[i] == '3'){
            a.push_back(word[i]);
        }
    }
    // sort
    sort(a.begin(), a.end());
    char c = '+';
    int n = a.size() - 1;
    
    for(int i = 0; i < a.size(); i++){
        cout << a[i];
        if(i != a.size() - 1) cout << '+'; 
    
    }
    
    return 0;
}